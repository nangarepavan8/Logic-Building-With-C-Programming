//write a program which aceep the number from user and print even factor of that number ...//

// input== 36
// output== 2 6 12 18 


#include<stdio.h>

void DisplayEven(int iNo)
{
    int iRet=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for (iRet=1;iRet<=iNo; iRet++)
    {
        if(iRet%2==0 && iNo==iRet)               // check that line
        {
            printf("%d",iRet);
        }

    }
    



}

int main()
{
    int iValue=0;

    printf("enter the number=\n");
    scanf("%d",&iValue);

    DisplayEven(iValue);
    

    return 0;
}