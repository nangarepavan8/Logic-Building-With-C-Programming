//  accept number adn check it i divisible by 5 or not   ...//

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckNumber(int iNo)
{
    int bRet=0;
    if((iNo%5)==0)
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
    int bRet=FALSE;


    printf("enter the number  \n");
    scanf("%d",&iValue);

    bRet=CheckNumber(iValue);
    
    if(bRet==TRUE)
    {
        printf("this number is divisible by 5 \n");
    }
    else
    {
        printf("this is not divisible by 5\n");
    }      
    return 0;
}