// accept number of rows and number of column from user and displya below pattern..

//input== rows =4 coloumn=4
/*  output= 1 2 3 4 
            5 6 7 8 
            9 1 2 3
            4 5 6 7 

*/   

#include<stdio.h>

void Pattern(int iRows,int iCol)
{
  int i=0;
  int j=0;
  int iCnt=1;
  
  if(iRows<0)
  {
    iRows=-iRows;
  }

  if(iRows<0)
  {
    iCol=-iCol;
  }

  for(i=0;i<iRows;i++)
  {
    for(j=0;j<iCol;j++)
    {
      printf("%d  \t",iCnt);
      iCnt++;
      if(iCnt==10)
      {
        iCnt=0;
      }

    }
    printf("\n");
  }  

 
}

int main()
{
  int iValue1 =0;
  int iValue2 =0;

  printf("enter first number \n");
  scanf("%d",&iValue1);

  printf("enter second number \n");
  scanf("%d",&iValue2);

  Pattern(iValue1,iValue2);
  
 return 0;
}