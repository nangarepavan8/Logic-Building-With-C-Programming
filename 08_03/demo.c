#include<stdio.h>

void iTable(int iNo)
{
  int iCnt=1;

  for(iCnt=1;iCnt<=10;iCnt++)
  {
      printf("%d\n",(iCnt*iNo));
  }

  
    
}

int main()
{
    int ivalue=0;
    int iRet=0;

    printf("enter the number=\n");
    scanf("%d",&ivalue);

    iTable(ivalue);

    return 0;
}