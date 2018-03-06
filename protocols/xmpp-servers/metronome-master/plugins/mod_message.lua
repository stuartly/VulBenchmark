-- * Metronome IM *
--
-- This file is part of the Metronome XMPP server and is released under the
-- ISC License, please see the LICENSE file in this source package for more
-- information about copyright and licensing.
--
-- As per the sublicensing clause, this file is also MIT/X11 Licensed.
-- ** Copyright (c) 2009-2012, Matthew Wild, Robert Hoelz, Waqas Hussain

local full_sessions = full_sessions;
local bare_sessions = bare_sessions;

local st = require "util.stanza";
local jid_bare = require "util.jid".bare;
local jid_split = require "util.jid".split;
local user_exists = require "core.usermanager".user_exists;

local function process_to_bare(bare, origin, stanza)
	local user = bare_sessions[bare];
	
	local t = stanza.attr.type;
	if t == "error" then
		-- discard
	elseif t == "groupchat" then
		origin.send(st.error_reply(stanza, "cancel", "service-unavailable"));
	elseif t == "headline" then
		if user and stanza.attr.to == bare then
			for _, session in pairs(user.sessions) do
				if session.presence and session.priority >= 0 then
					session.send(stanza);
				end
			end
		end  -- current policy is to discard headlines if no recipient is available
	else -- chat or normal message
		if user then
			local recipients = user.top_resources;
			if recipients then
				for i=1,#recipients do
					if recipients[i].send(stanza) then return true; end
				end
			end
		end
		-- no resources are online
		local node, host = jid_split(bare);
		local ok
		if user_exists(node, host) then
			-- TODO apply the default privacy list

			ok = module:fire_event("message/offline/handle", {
			    origin = origin,
			    stanza = stanza,
			});
		end

		if not ok then
			origin.send(st.error_reply(stanza, "cancel", "service-unavailable"));
		end
	end
	return true;
end

module:hook("message/full", function(data)
	local origin, stanza = data.origin, data.stanza;
	
	local session = full_sessions[stanza.attr.to];
	if session and session.send(stanza) then
		return true;
	else -- resource not online
		return process_to_bare(jid_bare(stanza.attr.to), origin, stanza);
	end
end);

module:hook("message/bare", function(data)
	local origin, stanza = data.origin, data.stanza;

	return process_to_bare(stanza.attr.to or (origin.username.."@"..origin.host), origin, stanza);
end);

module:add_feature("msgoffline");