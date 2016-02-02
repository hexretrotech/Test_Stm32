#define BIT_0 0x1
#define BIT_1 0x2
#define BIT_2 0x4
#define BIT_3 0x8
#define BIT_4 0x10
#define BIT_5 0x20
#define BIT_6 0x40
#define BIT_7 0x80
#define BIT_8 0x100
#define BIT_9 0x200
#define BIT_10 0x400
#define BIT_11 0x800
#define BIT_12 0x1000
#define BIT_13 0x2000
#define BIT_14 0x4000
#define BIT_15 0x8000
#define BIT_16 0x10000
#define BIT_17 0x20000
#define BIT_18 0x40000
#define BIT_19 0x80000
#define BIT_20 0x100000
#define BIT_21 0x200000
#define BIT_22 0x400000
#define BIT_23 0x800000
#define BIT_24 0x1000000
#define BIT_25 0x2000000
#define BIT_26 0x4000000
#define BIT_27 0x8000000
#define BIT_28 0x10000000
#define BIT_29 0x20000000
#define BIT_30 0x40000000
#define BIT_31 0x80000000

#define HSEON 0x00010000
#define HSERDY 0x00020000

#define RCC_CR *(unsigned long*)(0x40021000)
#define RCC_CFGR *(unsigned long*)(0x40021004)
#define RCC_CIR *(unsigned long*)(0x40021008)
#define RCC_APB2RSTR *(unsigned long*)(0x4002100C)
#define RCC_APB1RSTR *(unsigned long*)(0x40021010)
#define RCC_AHBENR *(unsigned long*)(0x40021014)
#define RCC_APB2ENR *(unsigned long*)(0x40021018)
#define RCC_APB1ENR *(unsigned long*)(0x4002101C)
#define RCC_BDCR *(unsigned long*)(0x40021020)
#define RCC_CSR *(unsigned long*)(0x40021024)

