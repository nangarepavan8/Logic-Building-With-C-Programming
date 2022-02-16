/*Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
*/

#include <stdio.h>

#define PI 3.14

double CircleArea(float iNo)
{
	double CArea = 0;
	CArea= (double)(3.14 * iNo *iNo);
	return CArea;
		
}

int main()
{
	
	float fValue = 0.0;
	double dRet = 0.0;
	
	printf("Enter the number\n");
	scanf("%f",&fValue);
	
	dRet = CircleArea(fValue);
	printf("The area of circle is %f",dRet);
	
	return 0;
}



