
// write a program which accept number from user and return the multipliaction of all


#include<stdio.h>

int Mult(int iNo)
{
    int iDigit = 0;
    int iMulti = 1;
    //int iCnt=0;
    
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
         if(iDigit!=0)
         {
            iMulti = iMulti * iDigit;  
         }         
        iNo=iNo/10;
        

    }
    return iMulti;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number\n");
    scanf("%d",&iValue);

    iRet=Mult(iValue);
    printf("your multiplication count is = %d", iRet);

    return 0;
}