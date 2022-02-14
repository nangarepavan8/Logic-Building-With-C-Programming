//accept number from user and print that number of $ and *   //

#include<stdio.h>

int Numbers(int iNo)
{
  int iDigit=0;
  int iCnt=1;
  
  
  for(iCnt=1;iCnt<=5;iCnt++)
  {
    printf("%d\n",(iCnt*iNo));
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