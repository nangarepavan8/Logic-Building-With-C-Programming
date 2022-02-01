
// write a program which accept number from user and return count of numbers in between 3 to 7d//

#include<stdio.h>

int CountInBetween(int iNo)
{
    int iDigit =0;
    int iCnt =0;

    while (iNo != 0)
    {
       iDigit=iNo%10;
       if((iDigit>3) && (iDigit<7))
       {
          
           
           printf("%d\n",iDigit);
           
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

    iRet=CountInBetween(iValue);
    printf("your digit count is = %d", iRet);

    return 0;
}