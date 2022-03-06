//input=   5
//output=   * * * * * # # # # #

#include<stdio.h>

int DollerIntoINR(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iRupes=0;
    iRupes=iNo*70;

    //return iRupes;
    
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter the USD $=\n");
    scanf("%d",&iValue);
   iRet= DollerIntoINR(iValue);

   printf("the indian currency is=%d\n",iRet);

    return 0;
}