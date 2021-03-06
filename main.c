#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
 
int main()
{
    GPIO_InitTypeDef GPIO_InitStructure;                    //��������� ��� ���������������� �����

    RCC_SYSCLKConfig(RCC_SYSCLKSource_HSI);                 //����� ��������� �������: ���������� ���������
 
    while(RCC_GetSYSCLKSource() != 0x00) {}                 //�������� ������������

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);   //��������� ������������ �����
 
    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_13;             //����� ���� ��� ������������
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;        //��� �������� ��� �����
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;       //������� ����� 50��
    GPIO_Init(GPIOC, &GPIO_InitStructure);                  //���������������� ����������
 
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