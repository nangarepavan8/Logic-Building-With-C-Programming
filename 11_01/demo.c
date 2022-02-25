
//write a program which accept number from user and diplay the number in between that //

//input=    23  30
// output== 24 25 26 27 28 29 

#include<stdio.h>

int NumberInBetween(int iNo1, int iNo2)
{
  int iCnt=0;

  for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
  {
    printf("%2d\t",iCnt);
  }
}
int main()
{
  int ivalue1=0;
  int ivalue2=0;

  printf("enter the first number\n");
  scanf("%d",&ivalue1);

  printf("enter the second number\n");
  scanf("%d",&ivalue2);


 NumberInBetween(ivalue1,ivalue2);

  return 0;
}