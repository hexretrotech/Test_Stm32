#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
 
int main()
{
    GPIO_InitTypeDef GPIO_InitStructure;                    //��������� ��� ���������������� �����

    RCC_SYSCLKConfig(RCC_SYSCLKSource_HSI);                 //����� ��������� �������: ���������� ���������
 
    while(RCC_GetSYSCLKSource() != 0x00) {}                 //�������� ������������

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);   //��������� ������������ �����
 
    
 
    while(1)
    {
        GPIO_SetBits(GPIOC, GPIO_Pin_13);                   //��������� 
        for(long i=0; i<200000; i++)
            ;
        GPIO_ResetBits(GPIOC, GPIO_Pin_13);
        for(long i=0; i<200000; i++)                        //����������
            ;
    }
}