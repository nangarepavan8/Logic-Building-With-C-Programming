
// write the program which aceept number from user and check wherther it is smaller than 100 or NOT   //

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckBigSmall(int iNo)
{
    
    if(iNo>=100)
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
    int iValue=0;

    BOOL bRet=FALSE;

    printf("enter the number=\n");
    scanf("%d",&iValue);

    bRet=CheckBigSmall(iValue);

    if ( bRet==TRUE)
    {
        printf("greter");
    }
    else
    {
        printf("samaller");
    }
     
    return 0;
}