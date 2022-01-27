

//write a program which aceept number feom user and prints that number in reverse direction..//

#include<stdio.h>

int PrintReverse(int iNo)
{
    int iDigit=0;
    int iRev=0;
    if(iNo<0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
          iDigit=iNo%10;
          iRev=(iRev*10)+iDigit;
        
          iNo=iNo/10;
    }
    
    return  iRev;
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("enter the number\n");
    scanf("%d",&iValue);

    iRet=PrintReverse(iValue);

    printf("this is the revrse number = %d\n",iRet);
    return 0;
}