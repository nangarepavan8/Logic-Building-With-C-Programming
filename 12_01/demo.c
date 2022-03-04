//input=   5
//output=   * * * * * # # # # #

#include<stdio.h>

void pattern(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    int iCnt2=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
    for(iCnt2=1;iCnt2<=iNo;iCnt2++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue=0;

    printf("enter the number=\n");
    scanf("%d",&iValue);
    pattern(iValue);
    return 0;
}