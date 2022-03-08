//input=   5
//output=   * * * * * # # # # #

#include<stdio.h>

int Factorial(int iNo)
{
   /* if(iNo<0)
    {
        iNo=-iNo;
    }*/
    int iSumEven=1;
    int iSumOdd=1;
    
    int iCnt=0;
    for(iCnt=iNo;1<=iCnt;iCnt--)
    {
        if((iCnt%2)==1)
        {
          iSumEven=iSumEven*iCnt;
        }
        else
        {
            iSumOdd=iSumOdd*iCnt;
        }
        

    }
    return (iSumEven-iSumOdd);
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