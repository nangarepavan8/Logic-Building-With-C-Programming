//input = row-3 colounm-4
//print stars

#include<stdio.h>

int Pattern(int iRows,int iCol)
{
  int i=0;
  int j=0;
  
   for(i=1;i<=iRows;i++)
   {
     for(j=1;j<=iCol;j++)
     {
       printf("* \t");
     }
     printf("\n");
   }

}

int main()
{
  int iValue1=0;
  int iValue2=0;

  printf("enter the ROWS=\n");
  scanf("%d",&iValue1);

   printf("enter the COLUMNS=\n");
   scanf("%d",&iValue2);

   Pattern(iValue1,iValue2);


  return 0;
}