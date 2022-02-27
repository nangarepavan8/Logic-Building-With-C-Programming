
//write a program which accept number from user and diplay addition the number in between that //

//input=    23  30
// output== 24 25 26 27 28 29 

#include<stdio.h>

int NumberInBetween(int iNo1, int iNo2)
{
  int iCnt=0;
  int iSum=0;
  if(iNo1>iNo2)
  {
    printf("Invalid series\n");
    return 0;
    
  }
  if((iNo1<0)&&(iNo2<0))
  {
    iNo1=-iNo1;
  }

  for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
  {
    iSum=iSum+iCnt;
    
  //    printf("%2d\t",iSum);
    
  }
  return iSum;
}
int main()
{
  int ivalue1=0;
  int ivalue2=0;

  int iRet=0;

  printf("enter the first number\n");
  scanf("%d",&ivalue1);

  printf("enter the second number\n");
  scanf("%d",&ivalue2);


 iRet=NumberInBetween(ivalue1,ivalue2);

 printf("the addition of given number is=%d\n",iRet);

  return 0;
}