
// write a program which accept number from user and return the count of even digits//

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit =0;
    int iCnt =0;

    while (iNo!=0)
    {
        iDigit=iNo%10;
        if((iDigit%2)==1)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
    
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number\n");
    scanf("%d",&iValue);

    iRet=CountEven(iValue);
    printf("your even digit count is = %d", iRet);

    return 0;
}