#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "bmp.h"


/**
  * �����ᶨ�壺
  * ���Ͻ�Ϊ(0, 0)��
  * ��������ΪX�ᣬȡֵ��Χ��0~127
  * ��������ΪY�ᣬȡֵ��Χ��0~63
  * 
  *       0             X��           127 
  *      .------------------------------->
  *    0 |
  *      |
  *      |
  *      |
  *  Y�� |
  *      |
  *      |
  *      |
  *   63 |
  *      v
  * 
  */

int main(void)
{
	/*OLED��ʼ��*/
	OLED_Init();
//	OLED_ShowImage(0, 0, 122, 50, gImage_haha);
//	OLED_ShowString(7, 48, "!��ϲ������Ӥ!", OLED_8X16);
//	OLED_Update();
//	Delay_ms(1000);
	int i = 0;
	while (1)
	{
		// ��ʼ���������Ļ
			OLED_Clear();
			OLED_ScrollImageDown(0, 0, 122, 50, gImage_haha,100);

			OLED_ShowString(7, 48, "!��ϲ������Ӥ!", OLED_8X16);
			OLED_Update();
			Delay_ms(1000);
	}
}
