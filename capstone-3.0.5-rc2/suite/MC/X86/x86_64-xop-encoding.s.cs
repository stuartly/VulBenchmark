# CS_ARCH_X86, CS_MODE_64, CS_OPT_SYNTAX_ATT
0x8f,0xe9,0x78,0xe2,0x0c,0x01 = vphsubwd (%rcx, %rax), %xmm1
0x8f,0xe9,0x78,0xe2,0xc8 = vphsubwd %xmm0, %xmm1
0x8f,0xe9,0x78,0xe3,0x0c,0x01 = vphsubdq (%rcx, %rax), %xmm1
0x8f,0xe9,0x78,0xe3,0xc8 = vphsubdq %xmm0, %xmm1
0x8f,0xe9,0x78,0xe1,0x08 = vphsubbw (%rax), %xmm1
0x8f,0xe9,0x78,0xe1,0xca = vphsubbw %xmm2, %xmm1
0x8f,0xe9,0x78,0xc7,0x21 = vphaddwq (%rcx), %xmm4
0x8f,0xe9,0x78,0xc7,0xd6 = vphaddwq %xmm6, %xmm2
0x8f,0xe9,0x78,0xc6,0x3c,0x02 = vphaddwd (%rdx, %rax), %xmm7
0x8f,0xe9,0x78,0xc6,0xe3 = vphaddwd %xmm3, %xmm4
0x8f,0xe9,0x78,0xd7,0x34,0x01 = vphadduwq (%rcx, %rax), %xmm6
0x8f,0xe9,0x78,0xd7,0xc7 = vphadduwq %xmm7, %xmm0
0x8f,0xe9,0x78,0xd6,0x28 = vphadduwd (%rax), %xmm5
0x8f,0xe9,0x78,0xd6,0xca = vphadduwd %xmm2, %xmm1
0x8f,0xe9,0x78,0xdb,0x64,0x01,0x08 = vphaddudq 8(%rcx, %rax), %xmm4
0x8f,0xe9,0x78,0xdb,0xd6 = vphaddudq %xmm6, %xmm2
0x8f,0xe9,0x78,0xd1,0x19 = vphaddubw (%rcx), %xmm3
0x8f,0xe9,0x78,0xd1,0xc5 = vphaddubw %xmm5, %xmm0
0x8f,0xe9,0x78,0xd3,0x21 = vphaddubq (%rcx), %xmm4
0x8f,0xe9,0x78,0xd3,0xd2 = vphaddubq %xmm2, %xmm2
0x8f,0xe9,0x78,0xd2,0x28 = vphaddubd (%rax), %xmm5
0x8f,0xe9,0x78,0xd2,0xfd = vphaddubd %xmm5, %xmm7
0x8f,0xe9,0x78,0xcb,0x22 = vphadddq (%rdx), %xmm4
0x8f,0xe9,0x78,0xcb,0xec = vphadddq %xmm4, %xmm5
0x8f,0xe9,0x78,0xc1,0x0c,0x01 = vphaddbw (%rcx, %rax), %xmm1
0x8f,0xe9,0x78,0xc1,0xf5 = vphaddbw %xmm5, %xmm6
0x8f,0xe9,0x78,0xc3,0x0c,0x01 = vphaddbq (%rcx, %rax), %xmm1
0x8f,0xe9,0x78,0xc3,0xc2 = vphaddbq %xmm2, %xmm0
0x8f,0xe9,0x78,0xc2,0x0c,0x01 = vphaddbd (%rcx, %rax), %xmm1
0x8f,0xe9,0x78,0xc2,0xd9 = vphaddbd %xmm1, %xmm3
0x8f,0xe9,0x78,0x82,0x0c,0x01 = vfrczss (%rcx, %rax), %xmm1
0x8f,0xe9,0x78,0x82,0xfd = vfrczss %xmm5, %xmm7
0x8f,0xe9,0x78,0x83,0x0c,0x01 = vfrczsd (%rcx, %rax), %xmm1
0x8f,0xe9,0x78,0x83,0xc7 = vfrczsd %xmm7, %xmm0
0x8f,0xe9,0x78,0x80,0x58,0x04 = vfrczps 4(%rax), %xmm3
0x8f,0xe9,0x78,0x80,0xee = vfrczps %xmm6, %xmm5
0x8f,0xe9,0x78,0x80,0x09 = vfrczps (%rcx), %xmm1
0x8f,0xe9,0x7c,0x80,0xe2 = vfrczps %ymm2, %ymm4
0x8f,0xe9,0x78,0x81,0x0c,0x01 = vfrczpd (%rcx, %rax), %xmm1
0x8f,0xe9,0x78,0x81,0xc7 = vfrczpd %xmm7, %xmm0
0x8f,0xe9,0x7c,0x81,0x14,0x01 = vfrczpd (%rcx, %rax), %ymm2
0x8f,0xe9,0x7c,0x81,0xdd = vfrczpd %ymm5, %ymm3
0x8f,0xe9,0x78,0x95,0xd1 = vpshlw %xmm0, %xmm1, %xmm2
0x8f,0xe9,0xf0,0x95,0x10 = vpshlw (%rax), %xmm1, %xmm2
0x8f,0xe9,0x78,0x95,0x14,0x08 = vpshlw %xmm0, (%rax, %rcx), %xmm2
0x8f,0xe9,0x68,0x97,0xf4 = vpshlq %xmm2, %xmm4, %xmm6
0x8f,0xe9,0xe8,0x97,0x09 = vpshlq (%rcx), %xmm2, %xmm1
0x8f,0xe9,0x50,0x97,0x34,0x0a = vpshlq %xmm5, (%rdx, %rcx), %xmm6
0x8f,0xe9,0x40,0x96,0xdd = vpshld %xmm7, %xmm5, %xmm3
0x8f,0xe9,0xe0,0x96,0x58,0x04 = vpshld 4(%rax), %xmm3, %xmm3
0x8f,0xe9,0x70,0x96,0x2c,0x08 = vpshld %xmm1, (%rax, %rcx), %xmm5
0x8f,0xe9,0x70,0x94,0xda = vpshlb %xmm1, %xmm2, %xmm3
0x8f,0xe9,0xf8,0x94,0x39 = vpshlb (%rcx), %xmm0, %xmm7
0x8f,0xe9,0x68,0x94,0x1c,0x10 = vpshlb %xmm2, (%rax, %rdx), %xmm3
0x8f,0xe9,0x40,0x99,0xdd = vpshaw %xmm7, %xmm5, %xmm3
0x8f,0xe9,0xe8,0x99,0x08 = vpshaw (%rax), %xmm2, %xmm1
0x8f,0xe9,0x78,0x99,0x5c,0x08,0x08 = vpshaw %xmm0, 8(%rax, %rcx), %xmm3
0x8f,0xe9,0x58,0x9b,0xe4 = vpshaq %xmm4, %xmm4, %xmm4
0x8f,0xe9,0xe8,0x9b,0x01 = vpshaq (%rcx), %xmm2, %xmm0
0x8f,0xe9,0x48,0x9b,0x2c,0x08 = vpshaq %xmm6, (%rax, %rcx), %xmm5
0x8f,0xe9,0x50,0x9a,0xc4 = vpshad %xmm5, %xmm4, %xmm0
0x8f,0xe9,0xe8,0x9a,0x28 = vpshad (%rax), %xmm2, %xmm5
0x8f,0xe9,0x68,0x9a,0x28 = vpshad %xmm2, (%rax), %xmm5
0x8f,0xe9,0x70,0x98,0xc1 = vpshab %xmm1, %xmm1, %xmm0
0x8f,0xe9,0xd8,0x98,0x01 = vpshab (%rcx), %xmm4, %xmm0
0x8f,0xe9,0x50,0x98,0x19 = vpshab %xmm5, (%rcx), %xmm3
0x8f,0xe9,0xe0,0x91,0x30 = vprotw (%rax), %xmm3, %xmm6
0x8f,0xe9,0x50,0x91,0x0c,0x08 = vprotw %xmm5, (%rax, %rcx), %xmm1
0x8f,0xe9,0x78,0x91,0xd1 = vprotw %xmm0, %xmm1, %xmm2
0x8f,0xe8,0x78,0xc1,0x09,0x2a = vprotw $42, (%rcx), %xmm1
0x8f,0xe8,0x78,0xc1,0x20,0x29 = vprotw $41, (%rax), %xmm4
0x8f,0xe8,0x78,0xc1,0xd9,0x28 = vprotw $40, %xmm1, %xmm3
0x8f,0xe9,0xf0,0x93,0x10 = vprotq (%rax), %xmm1, %xmm2
0x8f,0xe9,0xf0,0x93,0x14,0x08 = vprotq (%rax, %rcx), %xmm1, %xmm2
0x8f,0xe9,0x78,0x93,0xd1 = vprotq %xmm0, %xmm1, %xmm2
0x8f,0xe8,0x78,0xc3,0x10,0x2a = vprotq $42, (%rax), %xmm2
0x8f,0xe8,0x78,0xc3,0x14,0x08,0x2a = vprotq $42, (%rax, %rcx), %xmm2
0x8f,0xe8,0x78,0xc3,0xd1,0x2a = vprotq $42, %xmm1, %xmm2
0x8f,0xe9,0xf8,0x92,0x18 = vprotd (%rax), %xmm0, %xmm3
0x8f,0xe9,0x68,0x92,0x24,0x08 = vprotd %xmm2, (%rax, %rcx), %xmm4
0x8f,0xe9,0x50,0x92,0xd3 = vprotd %xmm5, %xmm3, %xmm2
0x8f,0xe8,0x78,0xc2,0x31,0x2b = vprotd $43, (%rcx), %xmm6
0x8f,0xe8,0x78,0xc2,0x3c,0x08,0x2c = vprotd $44, (%rax, %rcx), %xmm7
0x8f,0xe8,0x78,0xc2,0xe4,0x2d = vprotd $45, %xmm4, %xmm4
0x8f,0xe9,0xe8,0x90,0x29 = vprotb (%rcx), %xmm2, %xmm5
0x8f,0xe9,0x50,0x90,0x24,0x08 = vprotb %xmm5, (%rax, %rcx), %xmm4
0x8f,0xe9,0x58,0x90,0xd3 = vprotb %xmm4, %xmm3, %xmm2
0x8f,0xe8,0x78,0xc0,0x18,0x2e = vprotb $46, (%rax), %xmm3
0x8f,0xe8,0x78,0xc0,0x3c,0x08,0x2f = vprotb $47, (%rax, %rcx), %xmm7
0x8f,0xe8,0x78,0xc0,0xed,0x30 = vprotb $48, %xmm5, %xmm5
0x8f,0xe8,0x60,0xb6,0xe2,0x10 = vpmadcswd %xmm1, %xmm2, %xmm3, %xmm4
0x8f,0xe8,0x60,0xb6,0x20,0x10 = vpmadcswd %xmm1, (%rax), %xmm3, %xmm4
0x8f,0xe8,0x48,0xa6,0xe4,0x10 = vpmadcsswd %xmm1, %xmm4, %xmm6, %xmm4
0x8f,0xe8,0x60,0xa6,0x24,0x08,0x10 = vpmadcsswd %xmm1, (%rax, %rcx), %xmm3, %xmm4
0x8f,0xe8,0x50,0x95,0xe2,0x00 = vpmacsww %xmm0, %xmm2, %xmm5, %xmm4
0x8f,0xe8,0x48,0x95,0x20,0x10 = vpmacsww %xmm1, (%rax), %xmm6, %xmm4
0x8f,0xe8,0x48,0x96,0xfd,0x40 = vpmacswd %xmm4, %xmm5, %xmm6, %xmm7
0x8f,0xe8,0x70,0x96,0x10,0x00 = vpmacswd %xmm0, (%rax), %xmm1, %xmm2
0x8f,0xe8,0x68,0x85,0xcb,0x40 = vpmacssww %xmm4, %xmm3, %xmm2, %xmm1
0x8f,0xe8,0x40,0x85,0x39,0x60 = vpmacssww %xmm6, (%rcx), %xmm7, %xmm7
0x8f,0xe8,0x58,0x86,0xd2,0x40 = vpmacsswd %xmm4, %xmm2, %xmm4, %xmm2
0x8f,0xe8,0x70,0x86,0x44,0x08,0x08,0x00 = vpmacsswd %xmm0, 8(%rax, %rcx), %xmm1, %xmm0
0x8f,0xe8,0x68,0x87,0xe1,0x10 = vpmacssdql %xmm1, %xmm1, %xmm2, %xmm4
0x8f,0xe8,0x48,0x87,0x29,0x70 = vpmacssdql %xmm7, (%rcx), %xmm6, %xmm5
0x8f,0xe8,0x78,0x8f,0xca,0x30 = vpmacssdqh %xmm3, %xmm2, %xmm0, %xmm1
0x8f,0xe8,0x68,0x8f,0x1c,0x08,0x70 = vpmacssdqh %xmm7, (%rax, %rcx), %xmm2, %xmm3
0x8f,0xe8,0x60,0x8e,0xea,0x20 = vpmacssdd %xmm2, %xmm2, %xmm3, %xmm5
0x8f,0xe8,0x70,0x8e,0x10,0x40 = vpmacssdd %xmm4, (%rax), %xmm1, %xmm2
0x8f,0xe8,0x48,0x97,0xf8,0x30 = vpmacsdql %xmm3, %xmm0, %xmm6, %xmm7
0x8f,0xe8,0x60,0x97,0x69,0x08,0x50 = vpmacsdql %xmm5, 8(%rcx), %xmm3, %xmm5
0x8f,0xe8,0x60,0x9f,0xd5,0x70 = vpmacsdqh %xmm7, %xmm5, %xmm3, %xmm2
0x8f,0xe8,0x68,0x9f,0x40,0x04,0x50 = vpmacsdqh %xmm5, 4(%rax), %xmm2, %xmm0
0x8f,0xe8,0x58,0x9e,0xd6,0x40 = vpmacsdd %xmm4, %xmm6, %xmm4, %xmm2
0x8f,0xe8,0x58,0x9e,0x1c,0x08,0x40 = vpmacsdd %xmm4, (%rax, %rcx), %xmm4, %xmm3
0x8f,0xe8,0x60,0xcd,0xe2,0x2a = vpcomw $42, %xmm2, %xmm3, %xmm4
0x8f,0xe8,0x60,0xcd,0x20,0x2a = vpcomw $42, (%rax), %xmm3, %xmm4
0x8f,0xe8,0x60,0xed,0xe9,0x2b = vpcomuw $43, %xmm1, %xmm3, %xmm5
0x8f,0xe8,0x78,0xed,0x34,0x08,0x2c = vpcomuw $44, (%rax, %rcx), %xmm0, %xmm6
0x8f,0xe8,0x60,0xef,0xfb,0x2d = vpcomuq $45, %xmm3, %xmm3, %xmm7
0x8f,0xe8,0x60,0xef,0x08,0x2e = vpcomuq $46, (%rax), %xmm3, %xmm1
0x8f,0xe8,0x70,0xee,0xd0,0x2f = vpcomud $47, %xmm0, %xmm1, %xmm2
0x8f,0xe8,0x48,0xee,0x58,0x04,0x30 = vpcomud $48, 4(%rax), %xmm6, %xmm3
0x8f,0xe8,0x58,0xec,0xeb,0x31 = vpcomub $49, %xmm3, %xmm4, %xmm5
0x8f,0xe8,0x48,0xec,0x11,0x32 = vpcomub $50, (%rcx), %xmm6, %xmm2
0x8f,0xe8,0x78,0xcf,0xeb,0x33 = vpcomq $51, %xmm3, %xmm0, %xmm5
0x8f,0xe8,0x70,0xcf,0x38,0x34 = vpcomq $52, (%rax), %xmm1, %xmm7
0x8f,0xe8,0x60,0xce,0xc3,0x35 = vpcomd $53, %xmm3, %xmm3, %xmm0
0x8f,0xe8,0x68,0xce,0x11,0x36 = vpcomd $54, (%rcx), %xmm2, %xmm2
0x8f,0xe8,0x58,0xcc,0xd6,0x37 = vpcomb $55, %xmm6, %xmm4, %xmm2
0x8f,0xe8,0x60,0xcc,0x50,0x08,0x38 = vpcomb $56, 8(%rax), %xmm3, %xmm2
0x8f,0xe8,0x60,0xa3,0xe2,0x10 = vpperm %xmm1, %xmm2, %xmm3, %xmm4
0x8f,0xe8,0xe0,0xa3,0x20,0x20 = vpperm (%rax), %xmm2, %xmm3, %xmm4
0x8f,0xe8,0x60,0xa3,0x20,0x10 = vpperm %xmm1, (%rax), %xmm3, %xmm4
0x8f,0xe8,0x60,0xa2,0xe2,0x10 = vpcmov %xmm1, %xmm2, %xmm3, %xmm4
0x8f,0xe8,0xe0,0xa2,0x20,0x20 = vpcmov (%rax), %xmm2, %xmm3, %xmm4
0x8f,0xe8,0x60,0xa2,0x20,0x10 = vpcmov %xmm1, (%rax), %xmm3, %xmm4
0x8f,0xe8,0x64,0xa2,0xe2,0x10 = vpcmov %ymm1, %ymm2, %ymm3, %ymm4
0x8f,0xe8,0xe4,0xa2,0x20,0x20 = vpcmov (%rax), %ymm2, %ymm3, %ymm4
0x8f,0xe8,0x64,0xa2,0x20,0x10 = vpcmov %ymm1, (%rax), %ymm3, %ymm4
0xc4,0xe3,0x71,0x49,0xfa,0x51 = vpermil2pd $1, %xmm5, %xmm2, %xmm1, %xmm7
0xc4,0xe3,0xe1,0x49,0x20,0x32 = vpermil2pd $2, (%rax), %xmm3, %xmm3, %xmm4
0xc4,0xe3,0xdd,0x49,0x70,0x08,0x03 = vpermil2pd $3, 8(%rax), %ymm0, %ymm4, %ymm6
0xc4,0xe3,0x71,0x49,0x04,0x08,0x30 = vpermil2pd $0, %xmm3, (%rax, %rcx), %xmm1, %xmm0
0xc4,0xe3,0x65,0x49,0xe2,0x11 = vpermil2pd $1, %ymm1, %ymm2, %ymm3, %ymm4
0xc4,0xe3,0x65,0x49,0x20,0x12 = vpermil2pd $2, %ymm1, (%rax), %ymm3, %ymm4
0xc4,0xe3,0x69,0x48,0xcb,0x40 = vpermil2ps $0, %xmm4, %xmm3, %xmm2, %xmm1
0xc4,0xe3,0xe1,0x48,0x40,0x04,0x21 = vpermil2ps $1, 4(%rax), %xmm2, %xmm3, %xmm0
0xc4,0xe3,0xd5,0x48,0x30,0x12 = vpermil2ps $2, (%rax), %ymm1, %ymm5, %ymm6
0xc4,0xe3,0x61,0x48,0x20,0x13 = vpermil2ps $3, %xmm1, (%rax), %xmm3, %xmm4
0xc4,0xe3,0x6d,0x48,0xd4,0x40 = vpermil2ps $0, %ymm4, %ymm4, %ymm2, %ymm2
0xc4,0xe3,0x75,0x49,0x40,0x04,0x11 = vpermil2pd $1, %ymm1, 4(%rax), %ymm1, %ymm0
