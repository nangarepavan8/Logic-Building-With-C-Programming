
// write a program which accepts two numbers from useer and check whterther that two numbers are equal or not...//

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkSameOrNot(int iNo1,int iNo2)
{
    
    if(iNo1==iNo2)
    {
        return 1;
    }
    else
    {
        return 0;
    }    
    
}

int main()
{
    int iValue1=0;
    int iValue2=0;

    BOOL bRet=FALSE;

    printf("enter the first number: \n");
    scanf("%d",&iValue1);

    printf("enter the second number: \n");
    scanf("%d",&iValue2);

    bRet=ChkSameOrNot(iValue1,iValue2);
    if (bRet==TRUE)
    {
        printf("this numbers is same\n");
    }
    else
    {
        printf("this numbers are NOT Same\n");
    }
    return 0;
}