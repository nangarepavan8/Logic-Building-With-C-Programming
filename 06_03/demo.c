
//write a program which accept number from user and check the frequency of 4 in it..//

#include<stdio.h>


int ChkFrequency(int iNo)
{
    int iDigit=0;
    int iCnt=0;

    while (iNo!=0)
    {
        iDigit=iNo%10;
        if ((iDigit==4) || (iDigit==-4))
        {
            iCnt++;
        }
        
        iNo=iNo/10;
    }
    return iCnt;
}


int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter the number=\n");
    scanf("%d",&iValue);
    
    iRet=ChkFrequency(iValue);

  

   printf("the frequency of number is =  %d",iRet);

    return 0;
    
}