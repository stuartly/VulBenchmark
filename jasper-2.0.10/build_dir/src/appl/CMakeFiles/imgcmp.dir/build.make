# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cloud/work/jasper-2.0.10

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cloud/work/jasper-2.0.10/build_dir

# Include any dependencies generated for this target.
include src/appl/CMakeFiles/imgcmp.dir/depend.make

# Include the progress variables for this target.
include src/appl/CMakeFiles/imgcmp.dir/progress.make

# Include the compile flags for this target's objects.
include src/appl/CMakeFiles/imgcmp.dir/flags.make

src/appl/CMakeFiles/imgcmp.dir/imgcmp.c.o: src/appl/CMakeFiles/imgcmp.dir/flags.make
src/appl/CMakeFiles/imgcmp.dir/imgcmp.c.o: ../src/appl/imgcmp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cloud/work/jasper-2.0.10/build_dir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/appl/CMakeFiles/imgcmp.dir/imgcmp.c.o"
	cd /home/cloud/work/jasper-2.0.10/build_dir/src/appl && /usr/local/bin/afl-clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/imgcmp.dir/imgcmp.c.o   -c /home/cloud/work/jasper-2.0.10/src/appl/imgcmp.c

src/appl/CMakeFiles/imgcmp.dir/imgcmp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/imgcmp.dir/imgcmp.c.i"
	cd /home/cloud/work/jasper-2.0.10/build_dir/src/appl && /usr/local/bin/afl-clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/cloud/work/jasper-2.0.10/src/appl/imgcmp.c > CMakeFiles/imgcmp.dir/imgcmp.c.i

src/appl/CMakeFiles/imgcmp.dir/imgcmp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/imgcmp.dir/imgcmp.c.s"
	cd /home/cloud/work/jasper-2.0.10/build_dir/src/appl && /usr/local/bin/afl-clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/cloud/work/jasper-2.0.10/src/appl/imgcmp.c -o CMakeFiles/imgcmp.dir/imgcmp.c.s

# Object files for target imgcmp
imgcmp_OBJECTS = \
"CMakeFiles/imgcmp.dir/imgcmp.c.o"

# External object files for target imgcmp
imgcmp_EXTERNAL_OBJECTS =

src/appl/imgcmp: src/appl/CMakeFiles/imgcmp.dir/imgcmp.c.o
src/appl/imgcmp: src/appl/CMakeFiles/imgcmp.dir/build.make
src/appl/imgcmp: src/libjasper/libjasper.so.4.0.0
src/appl/imgcmp: /usr/lib/x86_64-linux-gnu/libm.so
src/appl/imgcmp: src/appl/CMakeFiles/imgcmp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cloud/work/jasper-2.0.10/build_dir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable imgcmp"
	cd /home/cloud/work/jasper-2.0.10/build_dir/src/appl && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/imgcmp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/appl/CMakeFiles/imgcmp.dir/build: src/appl/imgcmp

.PHONY : src/appl/CMakeFiles/imgcmp.dir/build

src/appl/CMakeFiles/imgcmp.dir/clean:
	cd /home/cloud/work/jasper-2.0.10/build_dir/src/appl && $(CMAKE_COMMAND) -P CMakeFiles/imgcmp.dir/cmake_clean.cmake
.PHONY : src/appl/CMakeFiles/imgcmp.dir/clean

src/appl/CMakeFiles/imgcmp.dir/depend:
	cd /home/cloud/work/jasper-2.0.10/build_dir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cloud/work/jasper-2.0.10 /home/cloud/work/jasper-2.0.10/src/appl /home/cloud/work/jasper-2.0.10/build_dir /home/cloud/work/jasper-2.0.10/build_dir/src/appl /home/cloud/work/jasper-2.0.10/build_dir/src/appl/CMakeFiles/imgcmp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/appl/CMakeFiles/imgcmp.dir/depend

