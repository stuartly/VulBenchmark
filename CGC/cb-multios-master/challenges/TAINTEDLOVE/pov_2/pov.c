#include "libpov.h"
int main(int cgc_argc, char *cgc_argv[]) {
   cgc_negotiate_type1(0x0, 0x0, 0);
   do {
      //*** writing data
      static unsigned char write_00000_00000[] = 
         "\x01\x2e\xdf\xf9\xd5\x88\x72\x10\x2e\xb4\xc9\x78\x6f\x50\x45\x54"
         "\xc2\x12\x84\xf0\x38\x47\xab\x15\x14\x21\x86\xc8\xbc\x53\x44\x64"
         "\xcb\xd9\x94\xec\x6d\x70\x07\x1f\x75\x30\xd2\x29\x46\xad\x54\xc4"
         "\x56\x43\xfc\xab\x35\x55\x81\x91\xa8\xfa\x68\x96\x5c\x89\xce\x15"
         "\xdc\xbb\xb6\xbf\x60\x72\xc1\xb9\x55\x26\xa4\x58\x24\x56\x0c\x61"
         "\x10\xd1\x3e\x8f\x03\x3d\x87\x47\x23\x09\x24\x61\x3d\x62\xfa\x85"
         "\x0c\xaf\x8a\x21\xdf\x4f\xd2\x26\x2c\x57\x52\x09\x5e\x7c\xa0\x9b"
         "\x4e\xdb\x67\x01\xe0\x41\x36\x35\x00\xde\xdb\x7c\x40\x40\x7b\x45"
         "\xdd\x55\x8b\xe8\xb0\xe1\x29\xa7\x3c\x81\xb4\x17\x14\xa2\xe4\xb7"
         "\xba\x2a\x4c\xdb\x88\xab\x9f\x51\xda\x28\xad\x8b\xcc\x9f\x52\x2a"
         "\x3b\x85\x40\xad\xcd\x91\x66\x41\x27\x36\xf3\x3d\x21\x18\x6b\x25"
         "\xdb\x6d\x1d\x91\x4b\x9f\x87\xd0\x5e\x6f\x99\xc2\x27\x4d\xe1\x65"
         "\x95\x8a\x81\xe3\x7d\xe5\x2e\xb5\xbe\xba\xfe\xca\xaa\x5f\xcf\xf9"
         "\x55\x9d\x1f\x57\x14\xa6\x69\x0a\x79\xf6\xb9\x7e\x14\xa2\x94\xce"
         "\xa0\x4f\xee\xbc\x71\xbb\x0e\x77\x74\x86\xbf\xd2\xfb\xf5\xf8\x2c"
         "\x93\x58\x48\xf8\xc7\x3e\x80\x44\xc5\x89\x25\x81\x82\x65\x35\xd7"
         "\x48\xe1\xfe\x7a\xe4\xb9\xc4\x8f\x2e\xdf\xda\xd4\x4e\xf3\x1e\x66"
         "\x66\xeb\x51\x43\xb8\xf6\x9c\x78\x57\x1f\x38\xc7\x11\x86\xde\xce"
         "\x4e\xfc\xa9\x76\x04\x11\x62\xc4\xee\x9b\x17\xd4\xff\x1f\x25\x4e"
         "\x8d\x56\x32\x9a\xd0\xcf\x29\xf0\x06\x42\x45\x02\xc1\x6e\xec\x22"
         "\x21\x12\xba\xa5\x67\x4b\x02\xef\x9c\x15\x05\x46\xac\x1c\x85\x3e"
         "\x4f\x01\x92\x8c\x5f\xec\xa2\x72\x8c\x45\x49\x68\x68\x88\x0f\x95"
         "\xaa\x1e\xb5\xdb\xb8\xab\x34\x32\x2f\x73\xf9\xc4\x98\x2e\x41\x88"
         "\x4a\xc4\x00\x83\xa2\x89\xc8\xb7\x72\xee\xf8\x8b\xa5\x42\xd5\x1d"
         "\x43\x33\x7b\xe3\x9e\xf4\x0c\x99\xbd\x78\xc2\xa5\xc2\xd2\xde\xdc"
         "\xbc\xc3\xef\x39\xd4\x5a\x16\x0f\xdc\x81\x77\xb9\x20\xfd\x06\xb3"
         "\x06\xe1\xfe\x53\x21\x27\xc7\x53\xe0\x99\xfa\x00\x64\x09\x42\x1e"
         "\x20\x5c\x7e\x99\x08\x60\xa2\xaf\x1c\x00\xf8\x94\xbd\xb0\x64\x15"
         "\xf2\x7d\xb5\x37\xd8\x4a\x22\x31\x0c\x36\xd4\xa1\xa2\x43\x2a\x1f"
         "\x56\x67\xca\x20\x2c\x7b\x37\x0d\x91\x5e\x1c\x34\xae\x3b\x9e\x94"
         "\x5f\x60\x30\x74\x61\x18\xdd\x7f\x0d\x84\x57\x0a\xb2\x50\xb6\x43"
         "\xbd\x79\x33\x99\xb3\xcd\xa3\x46\xd5\xf0\x0a\x28\xbf\x64\x97\x50"
         "\x9c\x58\x78\xde\xf8\xb3\x0d\x28\x9a\x06\x47\x64\xee\x92\xcb\xbd"
         "\x83\xa9\xc6\x7c\x35\x48\xa1\xba\xe1\x8a\xd4\xdb\xb1\xc8\xdc\x00"
         "\xf4\x0f\x14\x1e\x9b\x23\x5d\xb0\x6a\x57\x4b\xe4\x53\x29\x91\x37"
         "\x10\x88\xfe\x91\xe3\x16\xed\x0a\x64\x6a\x0c\x34\x0c\xed\xd7\x27"
         "\xf1\x2f\xcd\x29\x77\x22\x8b\xdb\x49\x46\xe5\xb8\xa4\x4b\x06\x2f"
         "\x2d\x64\x05\xcb\xba\x00\xc4\x37\xde\x9f\x14\xa5\x1c\x1e\x10\xe0"
         "\xf9\x4d\x5e\x21\xf1\x65\xf4\xe1\xf7\x35\x5f\x72\x24\xaf\x08\x71"
         "\xeb\xb0\x74\x8c\x35\x34\x1b\xde\xfc\xa2\x4b\xd8\x4c\x58\x03\xf0"
         "\x19\xa4\xa0\x4f\xc5\x7b\xca\x2d\x1b\x09\x02\x8e\x74\x90\x1c\x4e"
         "\x78\x8f\xc9\x9d\x4c\xfa\x0f\xf1\xbe\x85\x3e\x75\xb6\x63\x6d\x7d"
         "\x2a\xb1\xe7\xbe\x41\xaf\x99\x69\x76\xe9\xb0\x1c\x08\x4b\x58\x9f"
         "\x85\x95\x5e\x42\xb2\x00\xbf\x14\x5d\xd7\xc0\x64\xd6\xfc\x17\x39"
         "\xdf\xe9\xf6\x1f\x7b\x55\x35\xc6\x32\xea\xf8\xc0\x00\xae\xb9\x49"
         "\x95\x33\x69\x15\xa1\x99\x8e\x35\xc0\x63\xeb\xf7\x98\x95\x06\x8b"
         "\xe4\x85\xa9\xec\xfd\xd7\x10\xd6\xb2\xb8\xbb\x8f\x97\x10\x00\xec"
         "\x41\xfd\x50\x01\x50\x6c\xd4\x16\x5a\xbe\x9e\xaa\x1d\x0c\xa5\x04"
         "\x34\x2f\x4e\xc6\x4d\xb8\x61\xd8\x2d\x62\xdc\x30\x24\x6d\xc1\x14"
         "\xa9\xde\x8f\x5a\xe0\x06\x2a\x75\xe0\xba\x25\x54\x31\x46\x90\x52"
         "\x57\xd4\x26\xe1\x1d\xfa\xd0\x8f\x52\x23\xad\xeb\x8b\x5d\xce\x7d"
         "\x9b\xa1\x52\xf1\x87\xa1\x65\x32\xbd\x55\xf5\xe5\x6c\x7f\xe6\x82"
         "\x2c\x6c\x5f\x38\x45\x9a\xfc\xda\xda\xeb\xe7\x46\x8b\xe5\xd5\xd6"
         "\x98\xf2\x25\xfe\x35\x11\x7a\xf9\x7f\x63\xc2\x53\x50\x51\xe1\x64"
         "\x26\x55\xf8\x9f\xb8\x04\xb9\x2d\x81\x68\x1d\xb7\x85\xe6\xc8\x7b"
         "\x38\x52\xe4\x15\x1d\x64\x8b\xbe\x72\x9d\xc6\x21\xe3\xd2\x71\xaf"
         "\xaf\xa7\xa8\xad\x6c\x04\x14\x1b\x41\xe1\xaa\x9c\xdf\xa7\x57\x05"
         "\x4b\xe7\x7a\xc8\x4f\x25\xd2\x0e\x6c\x9c\x3b\x7c\x80\x04\x72\xec"
         "\xdd\x4f\xfa\x6d\xa9\x76\x73\x4e\x95\xb8\xdf\x6a\x3d\xfd\x05\xcf"
         "\x83\x69\xae\x11\xa6\xb0\x88\xe4\x88\x20\xcc\xa6\xec\x5a\x57\xb7"
         "\x9b\x16\x44\xcd\xb9\x9b\xd9\x40\xf2\x4a\xe8\xe2\x4d\x9d\xc9\x09"
         "\x26\xc3\x62\x32\x00\x2b\xa5\xf6\x8b\xdf\xd0\xce\xc9\x90\xa3\x6b"
         "\x3f\x98\x3b\x8d\x53\x02\xc9\xf9\x86\x71\xd0\x7e\x96\x7d\xc6\xf4"
         "\x82\x40\x43\x00\xfd\x98\x69\xf0\xbc\x54\x20\x0c\x9d\xd5\xaf\x4d"
         "\xd9\x0b\x04\x1d\x97\xb4\xc0\x5e\x0e\x63\xf7\x5b\x4a\xf9\x18\x8d"
         "\x08\xc5\xbd\x15\xd8\x1e\x14\x50\xce\xb0\x33\xd8\x88\x23\x52\xe2"
         "\xb7\x0a\xe1\x75\xb6\xd5\xe4\x54\x2e\x60\x7c\x44\x0d\x65\x2a\xbc"
         "\x8c\x40\x4c\xf0\xd8\xaa\x58\xda\x3e\x6d\x24\x7b\x48\x5d\x60\x17"
         "\x74\xac\x2a\xba\xf0\xb6\x19\x57\x4d\x08\xfc\x14\xfd\x38\x5f\x80"
         "\x7b\x58\xd8\xb9\x78\xc9\x14\xf8\x6c\x97\x56\xd4\x12\xc7\xf9\x39"
         "\x6f\xec\xeb\x78\xfe\x16\x90\x49\xb0\x42\x2f\x38\xf9\xb8\xc3\x3c"
         "\xcd\x33\xdd\x20\x77\x53\xd0\x61\x89\x89\xe3\x29\x3c\xba\x22\x8c"
         "\x9b\xbe\x55\x02\x3e\x4e\xea\xd5\xe8\x28\xc0\xd6\xb7\x58\xc8\x99"
         "\x80\x73\x88\xcf\xae\x94\xc1\xfe\x0a\x0a\xa4\x77\xc2\xcd\x92\xb0"
         "\xfb\x7c\x5d\x43\xce\x92\x45\x42\xac\x94\xf8\x89\x50\x19\x6a\x7b"
         "\x1d\x38\x21\xc3\xe3\xe7\x83\xed\xe9\xf4\xfe\x97\xe5\xb7\x08\xe6"
         "\xfe\xbd\x49\x7f\x30\x51\x41\x83\x8e\x17\x93\xad\xa6\xdc\x9a\xd4"
         "\x32\x14\xf8\x0f\x80\x71\xab\xeb\xb1\xa1\xf9\xe4\x26\x23\x27\xcb"
         "\x88\x84\x1e\x91\x79\xbf\xe2\x7e\xe0\xb9\x86\xef\x4d\xae\x69\x2d"
         "\xd9\xa4\x00\xb3\x1d\xc4\x2c\x12\x5c\x7e\x31\xbf\xae\xca\xcf\x4a"
         "\x7a\xd8\xe1\xad\x02\xc7\xe1\x25\xb9\x3f\x31\x9d\xd1\x36\xf6\x6c"
         "\xfa\x47\xb8\xe1\xa0\x76\x01\x65\x2e\xfb\x7d\x8f\xf2\xf5\x4b\xef"
         "\x2c\xde\x4f\x72\x04\xe0\x51\x02\xaa\x76\xfb\xa4\x0b\x86\x84\x99"
         "\x1d\xa4\x1d\x5c\xf4\xb0\xc4\x14\x48\xd1\x1a\x21\xbd\xfa\xa7\xb7"
         "\x25\x3e\x41\xac\x3e\xd5\x05\x66\xe3\x1f\xb2\x12\xad\x21\xf5\x1f"
         "\x43\xd6\x58\x99\x7f\x8c\xd2\x83\x32\x9e\xb4\x0f\x80\xd4\xce\xdc"
         "\x74\xa6\x20\x36\xba\xc8\x23\x4e\x40\x00\x90\x8b\x35\x2a\xd9\x9c"
         "\x33\x51\x12\x2d\x24\xe0\xbe\xd1\xb8\xdc\xf7\xaf\x83\x34\x6d\xb5"
         "\xab\x28\xcf\xfe\xbc\xde\x8e\x29\x7e\x10\x21\x07\xf9\x80\xf2\xd7"
         "\x3b\x22\x66\xc7\x73\x63\x50\x61\xab\x6d\xa4\x0b\xf6\x5d\xaa\x88"
         "\x15\x40\x2e\xc2\x47\xa1\x31\x77\x77\x62\x0e\xa1\x22\xe8\xbc\x45"
         "\xcd\xf5\x39\xaf\x21\xec\x7d\x73\xfd\x6f\x7d\x20\xc3\xb6\x52\xf3"
         "\x33\x04\x4c\xf7\x44\x66\xe6\xc7\x62\xe6\x04\xf9\xa9\xe7\x4d\xf9"
         "\xcb\x5e\xf0\x7c\xf7\xcf\x35\x0b\x2c\xad\xde\x97\xfd\xe0\xae\x00"
         "\x7f\x6b\xe5\xdb\x83\xf3\xde\x10\x48\x35\x9c\xa1\xa9\x56\x2f\x27"
         "\x1f\x1c\x43\xeb\x4f\xcf\x6c\xa0\xfb\x8b\xfa\x43\xc8\x59\xf9\x36"
         "\x3e\x37\x79\x65\x07\xcd\x58\xd1\x1e\x75\xaf\x2c\x2a\x3c\x59\x72"
         "\xd7\x83\x8b\xc2\xfc\x49\x98\x35\x99\x85\x09\x16\x2d\xed\xc4\x09"
         "\x36\x1a\x6e\xbc\x86\x98\xce\x59\xcb\xf4\x18\x52\x0e\xc7\xf9\xf3"
         "\x40\xe7\xeb\x29\xfb\x9d\xc8\x47\x87\x57\xc8\x9c\xe0\xda\x9c\x10"
         "\x22\xc4\xd2\xeb\x91\xa7\x9f\xef\x4f\x66\x64\x3d\x85\xed\x18\xdc"
         "\xc2\x47\x4b\x27\x8a\xb1\x3b\xef\x22\x76\x88\x1a\x1a\xfe\x60\xb4"
         "\x4c\x53\x40\xd6\x79\x7d\xf3\xe9\xf0\xfd\xc7\x40\xbb\xf5\x61\xd8"
         "\xb6\x5c\x1e\xe9\xf2\xce\x89\xa6\x3d\x74\x9f\x0e\xf6\x81\x3b\x82"
         "\x43\x97\x75\x89\x83\xdf\xf5\xb5\x57\x57\x83\x4f\x17\x1c\xde\xd1"
         "\x9a\x60\x9f\x6c\x12\xef\xb1\x6b\x1a\xa5\xa1\x9d\x13\x39\xc2\xd9"
         "\xe4\x6f\x96\x4a\xfa\xf8\x11\x62\x89\xae\xfd\x3a\x92\x7e\x55\xb0"
         "\x0c\x0c\x74\xed\x90\xb3\xd9\xa5\x76\xf8\x09\x25\x9e\x85\xba\xba"
         "\xf1\xa3\x57\x63\x3c\x59\x32\xfb\xbe\x6a\xd5\x69\x3c\xbc\x78\x09"
         "\xab\xc8\x09\x5e\x38\x4d\x94\x94\x0e\x02\xf0\x23\x98\x38\x6f\x03"
         "\xf7\x37\x05\xb0\x93\x2f\x7f\xa4\x9e\xb4\xa4\x44\xc7\xde\xd8\xed"
         "\x6b\x46\x24\xd1\xb5\x28\x47\xe8\x9a\xa1\x1d\x28\xe1\x18\x59\x9e"
         "\x90\x7c\x56\xe1\x0f\x5c\xfd\x51\xc9\x89\xae\xfd\x03\xd6\x34\xa2"
         "\xb7\x04\x55\x21\x00\x52\xfd\xc4\xbe\x3d\x46\x45\xab\x76\xa5\xdc"
         "\x7f\x71\xda\xf5\x49\x33\x81\x42\x0f\xa4\xaa\x31\xcc\x9a\x1a\x1b"
         "\x63\x30\x66\xd6\x55\x30\x84\x22\xcc\xd3\x66\x50\xac\x2c\xc1\x7e"
         "\x6f\xf2\xe6\x5f\x96\x2d\xa4\x5e\xda\x0b\xf3\xf7\x92\x00\x27\xcd"
         "\xb4\x89\x9e\x04\x6b\x93\x16\xf5\x51\x1c\x1b\x2c\x7c\xbb\x21\xd0"
         "\xf0\x10\x51\x4e\xb7\xae\xfe\xbb\xf1\xcd\x18\xda\x18\xaa\xd1\x66"
         "\xa4\xe5\xed\x9f\x5f\x3d\x8e\x14\x33\x6e\x89\x00\xc5\x74\xb0\x1b"
         "\x3e\xd6\x89\x18\x27\xdf\x53\x80\xa5\x2f\xd5\x57\x22\x90\xae\xeb"
         "\x74\x26\xcd\x59\x6b\x5a\x89";
      static unsigned int write_00000_00000_len = 1943;
      unsigned char *write_00000 = NULL;
      unsigned int write_00000_len = 0;
      write_00000 = cgc_append_buf(write_00000, &write_00000_len, write_00000_00000, write_00000_00000_len);
      if (write_00000_len > 0) {
         cgc_transmit_all(1, write_00000, write_00000_len);
      }
      cgc_free(write_00000);
   } while (0);
   do {
      unsigned char *read_00000;
      unsigned int read_00000_len;
      unsigned int read_00000_ptr = 0;
      //**** length read
      read_00000_len = 1;
      read_00000 = (unsigned char*)cgc_malloc(read_00000_len);
      int read_00000_res = cgc_length_read(0, read_00000, read_00000_len);
      if (read_00000_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00000_00000[] = 
         "\xaa";
      read_00000_ptr += cgc_data_match(read_00000 + read_00000_ptr, read_00000_len - read_00000_ptr, match_00000_00000, 1);
      cgc_free(read_00000);
      if (read_00000_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00001_00000[] = 
         "\x01\xc5\x9e\xa8\x0e\x14\x29\x2c\x5d\xcc\x0e\xfc\xde\x6d\x9e\x4b"
         "\x0e\x7d\xd6\x58\xb3\xf4\x95\xf0\x7e\x27\x0c\xa5\x45\xfe\x12\x3e"
         "\x35\xa6\xd1\xed\xf7\x2e\x75\x66\x7e\xd8\x9b\xf6\x21\xc5\x2b\x0a"
         "\x65\xc4\x34\x15\xb2\xc0\xe6\xf7\x5b\x74\x9f\xbd\x9e\xc2\xad\xa1"
         "\xb6\x26\xe5\x82\x22\xde\x4a\x35\x0f\x6d\x7a\xc3\x66\xe2\x5f\xc2"
         "\xd7\xce\xe3\x3a\x83\x49\x43\x7d\xd5\x4c\xc2\xc3\x19\xc2\x00\x14"
         "\xfa\x44\xa9\x68\x29\xcb\x83\x9f\x69\x29\x89\x79\x97\xca\xe4\xef"
         "\xa1\x02\xad\x35\xb2\x60\xc9\x8f\x05\x5d\xfc\x98\xf4\x74\xc9\x65"
         "\x5c\x20\x9b\x17\x86\x7f\x2b\x3d\xb4\xfb\xc4\x5f\x69\xf4\xe3\x22"
         "\x1f\x05\x4f\x27\x9e\xd0\xc3\xa2\x52\x0c\xe7\xa8\x2a\x64\x9e\x0d"
         "\x5a\x19\xad\x50\x97\x29\x79\xc5\x31\x85\x7e\x5e\x28\xf8\x9f\x8b"
         "\x09\xcb\x22\x79\x24\x22\xa8\x74\x38\x8c\x0b\xcb\x14\xd6\x2c\xde"
         "\xa9\xeb\x1a\x05\x0c\x7d\xa4\xb3\xbe\xba\xfe\xca\x30\x38\x79\x8f"
         "\x3f\x1c\xbd\x48\x00\xce\xc0\x54\xba\x81\x07\x4b\x03\x29\x3a\x68"
         "\x2d\x16\xfe\xd2\x1f\xae\x88\xf9\x13\x03\xea\xd8\xcd\x76\xd4\x8f"
         "\xbb\x68\x67\x23\x8f\xf1\x63\x7d\x84\x2a\x8f\x76\xbd\x50\xd5\x49"
         "\x7f\xa9\xdb\xcd\xe8\xdf\x9e\xef\x4f\x90\x63\x18\x08\xd1\x8c\x45"
         "\xaa\x05\xf7\xca\x94\xcd\x5b\xe7\xb4\x09\xa9\x9c\xd9\x06\xb6\xc2"
         "\x91\x83\x8c\x0e\x46\xc6\xa8\xcf\x10\xa6\x87\x41\xff\x1f\x9a\xba"
         "\xf8\xf5\xd6\x1d\x00\x36\x0a\xb6\xd3\xde\x42\xa7\x9d\xe3\x03\x6f"
         "\x6f\xd6\x30\xfc\x75\x4c\x64\x9a\xd5\xbb\x7d\x58\x17\xd0\xc6\x6b"
         "\x63\x83\xbe\xe0\x7e\x03\xde\xc1\xde\xa0\xae\xd4\xe5\xc9\xf4\xb1"
         "\xf1\x49\xfe\xdb\x51\xba\x26\x22\xbf\xde\x99\xd3\x36\x8a\x9b\x08"
         "\x13\x14\x4b\x9f\x34\x10\x80\x83\xd3\x4c\xc0\xd0\x66\xc8\x23\xbf"
         "\x53\x88\xe8\x82\xea\x1f\x22\x31\x28\x2b\x15\x42\x5d\x5f\xa1\x00"
         "\xd5\x51\x6e\x2c\x79\xd5\xc9\x27\xc7\xf0\x2d\xf9\xaf\xed\xd8\x12"
         "\x3e\x53\x66\x51\xe1\x04\xf3\x1c\xf0\x9f\xad\x47\x7f\xcd\x72\x68"
         "\xea\x50\x87\xe3\xcb\x04\x59\x3c\x36\x53\x4a\xe8\x83\x0a\x85\x49"
         "\x3c\xdb\x69\x53\xde\x87\xcd\xd5\xd4\x94\x19\x48\x5c\x1b\xdd\x70"
         "\x16\x45\x49\xb5\x4a\xba\x4f\xa3\xad\xdc\xe9\xf7\xfe\xd5\x0b\x79"
         "\x1a\x5a\xa6\xdf\xcf\x68\x06\xee\xa2\x05\xc7\x10\xb8\x91\xbd\x65"
         "\x93\x60\x7b\x07\xee\x8b\xbb\x4e\xcc\x20\xe1\xd6\x1e\xef\xd6\x8e"
         "\x12\xd1\x91\x6b\x84\x2f\x35\x68\x51\x4a\xa9\xe2\xfe\xa5\xc7\x44"
         "\xa0\x59\x2f\x3a\x93\x07\x48\xb8\x7e\xc4\x31\x39\x28\x39\x49\xbf"
         "\xdc\xad\x69\xc1\xdb\x18\x75\x93\x16\x87\x14\x53\xc4\xfa\xbf\xa2"
         "\x14\x9e\x61\x8b\xd8\xad\xc2\x07\x70\x4d\x10\x1e\xd6\xe8\x7a\xe3"
         "\x09\x32\x51\xb7\xd9\x6b\xf1\x3d\xd6\x3e\x3e\x44\x94\xcf\x20\xe6"
         "\x9a\xfb\xe1\x60\x73\xef\x5f\xf1\x4a\x28\xa9\x60\xc6\x2f\x9a\xfa"
         "\x8b\x36\x38\x3b\x7e\xdf\x4d\x36\x4d\xba\xfe\x6d\x8f\xd7\xb8\x87"
         "\x40\x92\xec\xa3\x10\x80\x3a\x6b\x80\x01\x2a\x08\x29\x4b\xa7\x2a"
         "\x09\xfe\x8d\x60\x0d\x56\x17\x59\x92\xb5\x9e\x38\x85\x5c\xe6\xba"
         "\x6d\x90\x71\x88\xb5\x6b\x3c\xc6\x5a\x43\xe8\xbc\xfd\x6c\xf1\x0a"
         "\x0f\xce\x07\x0b\x42\xf8\xb3\x43\xb2\xda\x03\xf6\x1f\x26\x2b\x4b"
         "\x4e\x02\x60\x79\x2b\xdc\xbf\x3a\xbc\x16\x47\x94\x30\x3d\x62\x64"
         "\x6c\xa0\xfa\xc0\x5f\xcd\xa7\x76\x6b\xa9\x15\xac\x39\x61\xfc\x3c"
         "\x46\x88\x1e\xcc\xc6\xf3\x0c\x3b\x29\x3e\x4f\x3a\x8e\x13\x1f\x22"
         "\xb9\x3b\xea\x3e\x5b\xa1\x22\xde\x70\x61\x15\x32\xf9\x2e\x5f\x70"
         "\x6d\x16\x6e\x66\x22\xbd\xe0\x46\xe0\xfd\x56\x76\xba\x12\x04\x55"
         "\xf9\x25\x41\xdc\x2c\x25\x10\x1c\xcc\x4f\xaf\x5c\xa5\x68\x68\x5b"
         "\x4b\xc0\xe9\x3f\x42\xdf\xe6\xd5\x7b\x24\xea\x8e\x6c\xb0\xed\xd4"
         "\xf4\xca\x6a\xf3\xbb\x10\x81\x9c\xd8\x75\xb5\x7b\xcc\x7b\x69\xe0"
         "\x5d\x13\x6d\xd3\x05\x59\x79\x32\x7b\xbb\xb4\x9c\xfa\x5b\x7a\xd6"
         "\x2d\x86\xc3\xca\xf0\x9e\xe6\xba\xf9\xc3\x72\x7f\xf2\x15\xd5\x78"
         "\xeb\xf4\x00\x34\x04\x6d\xc8\x35\x98\x72\xae\x71\x77\xe8\x58\x7f"
         "\x2c\xbb\x24\x99\x6e\x64\xea\xc0\x41\x44\xfe\x1e\x9d\x26\xfc\x11"
         "\xb7\xec\x31\x39\x04\x43\xc9\x57\x7b\x13\x6e\xdf\xa4\x9b\xbc\xa5"
         "\xa3\x51\x9a\x39\x6b\x73\x6f\x30\xd7\x3c\xb1\x45\xb7\xb1\xbf\x61"
         "\xb0\xc6\x23\x34\x67\xc5\xac\xe5\x40\x94\x98\x54\xc5\x61\xbe\xab"
         "\xe9\xe3\xc3\x6b\x77\xbb\xae\xeb\x9f\xb3\x18\xb3\xe5\x5f\xee\x8f"
         "\xd5\x41\xe6\x70\x5e\x65\x7b\x6e\x05\x10\xe2\x9e\x71\xc6\x22\xb7"
         "\xda\x4e\x2d\x73\x40\xc0\x9e\xa9\xd2\x30\x81\x3a\x18\x1b\x8e\x03"
         "\x22\xe0\x49\xd6\x73\x4e\x0c\xa6\x60\xfa\x7d\xd6\xdb\x7a\xb9\x0c"
         "\xdb\xef\x44\x37\x57\xd3\xb1\x66\x1d\xc2\x04\xb7\xc0\xad\x22\x37"
         "\xe0\xaf\xd7\x23\x1a\x59\xec\xf2\x57\xf6\x47\x3f\x8a\xbb\x36\xd4"
         "\x0f\xec\xe2\xec\x13\xe5\x24\x68\x63\x61\x63\x61\xfe\x77\x48\xe3"
         "\xf6\xbf\x57\x83\x3f\xc4\x5e\x41\x43\x56\xa8\xd4\xa0\x9e\x39\x01"
         "\x95\xbe\xb2\xbe\xeb\xb4\x96\xdf\xe4\x95\xa2\x10\x5c\x4d\x23\xd4"
         "\x4a\x92\xd6\xa5\x10\xad\x58\xe3\x4b\x78\x77\x11\xee\xe7\xc2\x6c"
         "\xc4\x9b\xb4\xf4\xa3\x24\x87\x64\x55\x38\xb3\x42\x00\xd5\xec\xec"
         "\x7f\xf1\x14\x51\x48\xd3\xa4\x96\x83\x64\x52\xb2\x74\x4b\xa0\x6d"
         "\x14\x6d\x67\x9d\x82\x1d\x03\x1e\x45\xd7\x12\x09\x56\x5b\x33\x50"
         "\xf0\x98\xfc\x50\xc8\xe6\x19\xe7\xa8\x57\xb8\xf2\x73\xe5\xc7\x93"
         "\xe4\x1f\x38\x98\x3c\x9f\x24\x27\xf3\xa2\xb9\x5f\x29\xb0\x64\xad"
         "\x3e\xb5\x1d\x3c\x95\x51\x31\xd2\x32\x7b\x62\xb0\x7a\xe3\xa9\xd3"
         "\x49\x07\x83\xb2\x03\x22\xba\x41\xaa\x63\x1d\x30\x7a\x66\x03\x59"
         "\xa9\xdd\x88\x89\x89\x46\xbb\xc2\xbb\xbe\xf8\xfa\x4f\x85\x0a\xc1"
         "\x5a\x18\x59\x21\x78\x08\x0f\x72\x38\x1e\x5d\x7f\xef\xfa\x24\x1f"
         "\x78\x2d\xc5\x33\x7a\x38\xae\xaf\x90\xc0\x70\x71\xdf\xd0\x6b\xba"
         "\xf5\x07\x97\x10\xbd\x6e\xdd\x81\x20\x58\x7d\xb2\x84\x15\xcf\x77"
         "\x99\xc1\xc4\x23\x4e\xd9\xc9\x37\x75\x33\x0c\xdb\x8c\xe6\x3d\x28"
         "\x89\xf1\x6a\xf8\x9a\xe2\x27\x4f\x1a\x97\xa4\xad\x29\x49\x7e\x47"
         "\xe0\xf7\xb0\x4e\x57\x16\xe2\xed\xf5\xad\x94\xa1\x17\x22\x3c\xac"
         "\x8c\xd4\x97\x29\xb7\xf6\x83\xa1\x9f\xbf\xe4\x3c\x1a\xfa\x61\x3e"
         "\x47\x7e\x55\x43\xf2\x8f\xda\x0b\x14\x35\x0a\xdc\x43\xeb\xe0\x53"
         "\xae\x05\x9b\x82\x42\x8e\xdb\xfa\x26\xa4\xf8\x1f\x5e\x29\xf4\xca"
         "\x63\x2f\x11\xcb\x8c\x0d\x59\x8a\x66\x77\x0e\xce\xcf\x8e\x45\xab"
         "\xa6\xfe\x97\xc0\x11\xf5\x20\x89\x75\xe8\xf4\xd8\x0f\xb5\x9f\xdc"
         "\xc7\xb3\x00\x0f\x72\xfd\xaf\x29\x33\x00\x9e\xec\x56\xf2\x74\x30"
         "\xb4\x4d\x26\xf4\xfb\xc1\x42\x59\x83\xd5\x4d\x8f\xd4\x6b\xfb\x35"
         "\xb2\xfb\x57\x5d\xf4\x82\x1d\xd7\x3f\xf3\xcf\x9f\x8a\x0f\xc7\x46"
         "\x23\x24\xf5\x39\x69\xf9\x37\xc9\x17\x01\xc4\xb7\x83\xc2\xce\xec"
         "\xdb\xa6\x48\xda\xf7\xfa\x54\x88\x73\xa2\xd0\x98\xda\x91\x71\xd7"
         "\xbc\x83\x4d\x74\xcf\x7a\xf2\xc6\xca\xe2\x40\x4a\x5b\x7f\x8b\xd1"
         "\xe4\x2d\xcd\xc3\x5c\x28\x96\x57\xf4\x4a\x65\xb0\x58\x3f\xe0\x8c"
         "\x3a\xac\x25\xd2\xf5\xd1\xb8\xeb\xc8\xa3\xca\xe2\xcc\x4e\x98\xcf"
         "\x59\x89\xfe\xd7\xa1\xf8\xbd\x9a\xfc\x7f\x16\xba\xe0\x16\x98\x9a"
         "\x89\x2c\x3a\x64\x5a\x75\xbe\x4a\xe8\x8b\x00\xd4\xdf\x2e\x51\x86"
         "\x06\x3e\xd1\x40\x67\x8a\x1f\xe5\xdd\x28\x0d\x4b\x0f\x78\xce\x26"
         "\x23\x0e\x76\x80\x88\x9a\x6a\x06\x73\x31\x00\xb1\x7c\x6a\xfa\xe4"
         "\x19\x55\xb9\xcc\x47\xa6\xef\xb4\x78\xc2\x23\xc7\x43\x6f\x15\x14"
         "\x0b\xf6\x13\x85\x3e\x28\x66\xbb\xf5\x01\x6d\xad\xad\xe1\xe3\x7a"
         "\xd7\x80\x9b\x53\x0f\x9d\x57\xd0\xf3\x94\x86\x46\x73\xdd\x96\x0a"
         "\x11\xfa\xd7\x74\x41\x79\x0f\x16\x01\xc9\x00\xac\x4a\xf6\x1f\x33"
         "\xb7\x22\xe7\xce\x7f\x5b\x03\xb5\xec\x35\x1a\xd7\xcf\xb7\x46\x28"
         "\x34\x7f\x42\x0d\x2d\xd7\xdd\xa8\xa8\x22\x21\x90\xa8\x59\x3e\xc1"
         "\x1b\xeb\xb2\xf1\xda\x4f\x13\x2a\x16\xc0\x26\x4a\x8a\x9b\x75\x90"
         "\x8b\x30\xe8\x49\xac\x1e\x92\xc7\x00\x65\x13\x5c\x8f\xf0\x77\x96"
         "\xc2\xf2\xaa\x24\x38\x20\x1c\xec\x56\x53\xe5\x46\xe5\x1d\x1b\xc8"
         "\x4f\x7c\x31\x6b\xb3\x39\xfe\x56\x35\x0d\xbb\x7f\xe2\x66\x44\x50"
         "\x2e\x24\xd0\x8c\xd6\x47\xfe\xf3\xeb\x43\x00\xc5\xc9\x45\x11\x12"
         "\x34\x4a\x7c\x9d\x3a\x8d\xed\xfb\x57\xc1\xce\xb4\x00\xd0\xf7\xa1"
         "\x9a\x19\xbc\x8b\x79\x72\x9a\xa4\x80\x32\x8e\x66\x48\xb6\x54\xc1"
         "\xf8\x0f\xa1\x57\xe8\x70\x21\x46\xc6\x5f\x5e\xa6\xea\x71\x25\x5d"
         "\x6c\x2b\x08\xec\x8e\xbf\xbc\xe2\x3f\xbd\xa6\x00\xf1\x90\x9f\x15"
         "\x07\x13\x96\x98\x49\x8d";
      static unsigned int write_00001_00000_len = 1830;
      unsigned char *write_00001 = NULL;
      unsigned int write_00001_len = 0;
      write_00001 = cgc_append_buf(write_00001, &write_00001_len, write_00001_00000, write_00001_00000_len);
      if (write_00001_len > 0) {
         cgc_transmit_all(1, write_00001, write_00001_len);
      }
      cgc_free(write_00001);
   } while (0);
   do {
      unsigned char *read_00001;
      unsigned int read_00001_len;
      unsigned int read_00001_ptr = 0;
      //**** length read
      read_00001_len = 1;
      read_00001 = (unsigned char*)cgc_malloc(read_00001_len);
      int read_00001_res = cgc_length_read(0, read_00001, read_00001_len);
      if (read_00001_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00001_00000[] = 
         "\x47";
      read_00001_ptr += cgc_data_match(read_00001 + read_00001_ptr, read_00001_len - read_00001_ptr, match_00001_00000, 1);
      cgc_free(read_00001);
      if (read_00001_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00002_00000[] = 
         "\x00\xdf";
      static unsigned int write_00002_00000_len = 2;
      unsigned char *write_00002 = NULL;
      unsigned int write_00002_len = 0;
      write_00002 = cgc_append_buf(write_00002, &write_00002_len, write_00002_00000, write_00002_00000_len);
      if (write_00002_len > 0) {
         cgc_transmit_all(1, write_00002, write_00002_len);
      }
      cgc_free(write_00002);
   } while (0);
   do {
      unsigned char *read_00002;
      unsigned int read_00002_len;
      unsigned int read_00002_ptr = 0;
      //**** length read
      read_00002_len = 1;
      read_00002 = (unsigned char*)cgc_malloc(read_00002_len);
      int read_00002_res = cgc_length_read(0, read_00002, read_00002_len);
      if (read_00002_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00002_00000[] = 
         "\xdf";
      read_00002_ptr += cgc_data_match(read_00002 + read_00002_ptr, read_00002_len - read_00002_ptr, match_00002_00000, 1);
      cgc_free(read_00002);
      if (read_00002_ptr) {}  //silence unused variable warning if any
   } while (0);
}
