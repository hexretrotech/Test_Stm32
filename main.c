#include "stm32f103.h"

int main() 
{
    RCC_CR |= HSEON;  //Enable HSE clock
    while((RCC_CR && HSERDY) == 0); //Wait HSE sturtup
    
    RCC_CFGR |= BIT_0;  //Set system clock from HSE
    
    
    RCC_APB2ENR |= 0x16 | BIT_0 | BIT_2 | BIT_14;     //Clock port enable
    *(unsigned long*)(0x40010804) |= BIT_4 | BIT_5 | BIT_6 | BIT_7 | BIT_10;  //configure port for uart
    *(unsigned long*)(0x40013808) |= 0x34D; //set baudrate
    *(unsigned long*)(0x4001380C) |= BIT_13 | BIT_3;  //enable uart
    *(unsigned long*)(0x40013804) |= 'H';  //send data
    *(unsigned long*)(0x40011004) |= 0x300000 ; //PC13 output
    
    
     
    while(1)
    {
      *(unsigned long*)(0x4001100C) = 0xFFFF;
      *(unsigned long*)(0x40013804) |= 'H';
      for(long i=0; i<1000000; i++) { };
       
      *(unsigned long*)(0x4001100C) = 0x0000;
      *(unsigned long*)(0x40013804) |= 'H';
      for(long i=0; i<1000000; i++ ){ };
    }
}