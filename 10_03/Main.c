/*Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)
*/

#include <stdio.h>


int KMtoMeter(int iNo)
{
	iNo = iNo * 1000;
	return iNo;	
	
}


int main()
{
	
	int iValue = 0;
	int iRet = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);
	iRet = KMtoMeter(iValue);	
	
	printf("KM to Meter converted value is %d", iRet);
	
	return 0;
}



