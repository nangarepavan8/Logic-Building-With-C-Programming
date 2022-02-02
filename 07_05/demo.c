
// write a program which accept number from user and return 
// return its sumation of even and sumation odd digits


#include<stdio.h>

int SumationEvenOdd(int iNo)
 {
    int iDigit = 0;
    int iSumEven=0;
    int iSumOdd=0;
    //int iSum =0;
   // int iCnt=0;
    
    if(iNo==0)
    {
        return 0;
    }
    if(iNo<0)
    {
        iNo=-iNo;
    }


    while (iNo!=0)
    {
        iDigit=iNo%10;
        if ((iDigit%2)==0)
        {
            printf("even number is=%d\n",iDigit);

            iSumEven=iSumEven+iDigit;
            printf("ADDITION of the EVEN number is%d\n",iSumEven);
        }
        else if ((iDigit%2)==1)
        {
            printf("odd number is=%d\n",iDigit);
             iSumOdd=iSumOdd+iDigit;
            printf("ADDITION the ODD number is%d\n",iSumOdd);
        }   

        iNo=iNo/10;
    }
 }

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number\n");
    scanf("%d",&iValue);

    iRet=SumationEvenOdd(iValue);
    printf("your multiplication count is = %d", iRet);

    return 0;
}