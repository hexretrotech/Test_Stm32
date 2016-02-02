#include "stm32f103.h"

int main() 
{
  RCC_APB2ENR |= BIT_12 | BIT_2 | BIT_0;
  GPIOA_CRL |= BIT_20 | BIT_21 | BIT_23 | BIT_26 | BIT_29 | BIT_28 | BIT_31;
  SPI1_CR1 |= BIT_2 | BIT_6 | BIT_14 | BIT_5 | BIT_4 | BIT_3;
  
  while(1) {
    SPI1_DR = 0xAAAA;
    for (long i = 0; i <= 1000000; i++);
    
    SPI1_DR = 0xAAAA;
    for (long i = 0; i <= 1000000; i++);
  }
}