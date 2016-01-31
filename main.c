#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
 
int main()
{
    GPIO_InitTypeDef GPIO_InitStructure;                    //Структура для конфигурирования порта

    RCC_SYSCLKConfig(RCC_SYSCLKSource_HSI);                 //Выбор источника частоты: внутренний генератор
 
    while(RCC_GetSYSCLKSource() != 0x00) {}                 //Ожидание переключения

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);   //Включение тактирования порта
 
    
 
    while(1)
    {
        GPIO_SetBits(GPIOC, GPIO_Pin_13);                   //Включение 
        for(long i=0; i<200000; i++)
            ;
        GPIO_ResetBits(GPIOC, GPIO_Pin_13);
        for(long i=0; i<200000; i++)                        //Выключение
            ;
    }
}