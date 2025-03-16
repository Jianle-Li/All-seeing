#include "stm32f10x.h"
#include "img_pro.h"
#include "./ov7725/bsp_ov7725.h"



uint8_t img[320][240]=0;

void RGB2Gray(uint16_t width,uint16_t height)
{
	uint16_t i, j; 
	uint16_t Camera_Data;
	float gray_value;
	uint8_t R=0,G=0,B=0;
	for(i = 0; i < width; i++)
	{
		for(j = 0; j < height; j++)
		{
			READ_FIFO_PIXEL(Camera_Data);		/* 从FIFO读出一个rgb565像素到Camera_Data变量 */
			R = (Camera_Data >> 11) & 0x1F;
			G = (Camera_Data >> 5) & 0x3F;
			B = Camera_Data & 0x1F;
			gray_value = (R * 0.3) + (G * 0.59) + (B * 0.11);
			img[i][j]=gray_value;
		}
	}
}

// Binary processing of grayscale images
void BinarizeImage(uint8_t* inputImage, uint8_t* outputImage, int width, int height, int threshold) 
{
	for (int i = 0; i < width * height; i++) 
	{
        outputImage[i] = (inputImage[i] > threshold) ? 255 : 0; // 大于阈值则为白色，小于则为黑色
  }
}
