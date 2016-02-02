#include "stm32f103.h"

int main() 
{
    RCC_CR |= HSEON;  //Enable HSE clock
    while((RCC_CR && HSERDY) == 0); //Wait HSE sturtup
    
    
    RCC_APB2ENR |= 0x16;     //Clock port enable
    
    *(unsigned long*)(0x40011004) |= 0x300000; //PC13 output
    
    
     
    while(1)
    {
      *(unsigned long*)(0x4001100C) = 0xFFFF;
      for(long i=0; i<1000000; i++) { };
       
      *(unsigned long*)(0x4001100C) = 0x0000;
      for(long i=0; i<1000000; i++ ){ };
    }
}