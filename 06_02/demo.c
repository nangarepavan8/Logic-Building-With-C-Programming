

//write a program which aceept number feom user and prints that number in reverse direction..//

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL ZeroOrNot(int iNo)
{
    int iDigit=0;
    int Rev=0;

    while (iNo!=0)
    {
        iDigit=iNo%2;
        if (iDigit==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
        
    }
    
   
}

int main()
{
    int iValue = 0;
    BOOL bRet=FALSE;

    printf("enter the number\n");
    scanf("%d",&iValue);

    bRet=ZeroOrNot(iValue);

    if (bRet==TRUE)
    {
        printf("it contains zero\n");
    }
    else
    {
        printf("it congtains not zero\n");
    }
    
    return 0;
}