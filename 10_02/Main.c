/*Write a program which accept width & height of rectangle from user and calculate
its area. (Area = Width * Height)
*/


#include <stdio.h>

#define PI 3.14

double RectArea(float fWidth,float fHeight)
{
	double dRectArea = 0;
	dRectArea= (double)(fWidth * fHeight);
	return dRectArea;
		
}

int main()
{
	
	float fWidth = 0.0;
	float fHeight = 0.0;
	double dRet = 0.0;
	
	printf("Enter the width\n");
	scanf("%f",&fWidth);
	
	printf("Enter the height\n");
	scanf("%f",&fHeight);
	
	dRet = RectArea(fWidth,fHeight);
	printf("The area of circle is %f",dRet);
	
	return 0;
}






