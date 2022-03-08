//input=   5
//output=   * * * * * # # # # #

#include<stdio.h>

int Factorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iSum=1;
    
    int iCnt=0;
    for(iCnt=iNo;1<=iCnt;iCnt--)
    {
        iSum=iSum*iCnt;

    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter the number=\n");
    scanf("%d",&iValue);
   iRet= Factorial(iValue);

   printf("sum of factorial is=%d\n",iRet);

    return 0;
}