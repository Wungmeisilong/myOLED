#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "bmp.h"


/**
  * 坐标轴定义：
  * 左上角为(0, 0)点
  * 横向向右为X轴，取值范围：0~127
  * 纵向向下为Y轴，取值范围：0~63
  * 
  *       0             X轴           127 
  *      .------------------------------->
  *    0 |
  *      |
  *      |
  *      |
  *  Y轴 |
  *      |
  *      |
  *      |
  *   63 |
  *      v
  * 
  */

int main(void)
{
	/*OLED初始化*/
	OLED_Init();
//	OLED_ShowImage(0, 0, 122, 50, gImage_haha);
//	OLED_ShowString(7, 48, "!恭喜韩立结婴!", OLED_8X16);
//	OLED_Update();
//	Delay_ms(1000);
	int i = 0;
	while (1)
	{
		// 初始清除整个屏幕
			OLED_Clear();
			OLED_ScrollImageDown(0, 0, 122, 50, gImage_haha,100);

			OLED_ShowString(7, 48, "!恭喜韩立结婴!", OLED_8X16);
			OLED_Update();
			Delay_ms(1000);
	}
}
