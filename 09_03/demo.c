//accept number from user and print that numberline


#include<stdio.h>

int Numbers(int iNo)
{
  int iDigit=0;
  int iCnt=0;
  

  for(iCnt=-iNo;iCnt<=iNo;iCnt++)
  {
       
    printf("%d\n",iCnt);
  }
}

int main()
{
  int iValue=0;

  printf("enter the number\n");
  scanf("%d",&iValue);

  Numbers(iValue);


  return 0;
}