//accept number from user and print that number of $ and *   //

#include<stdio.h>

int Numbers(int iNo)
{
  int iDigit=0;
  int iCnt=0;
  

  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    if((iCnt%2)==1)
    {
     printf("%d\n",iCnt);
    }
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