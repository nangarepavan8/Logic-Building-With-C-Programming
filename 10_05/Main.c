/*Write a program which accept area in square feet and convert it into square
meter. (1 square feet = 0.0929 Square meter)
*/

#include <stdio.h>


double SquareMeter(double iNo)
{
	iNo = iNo * 0.0929;
	return iNo;	
	
}


int main()
{
	
	int iValue = 0;
	double iRet = 0;

	printf("Enter area in square feet\n");
	scanf("%d",&iValue);
	iRet = SquareMeter(iValue);	
	
	printf("Converted value is %f", iRet);
	
	return 0;
}



