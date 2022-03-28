//input = row-3 colounm-4
//print stars

#include<stdio.h>

int Pattern(int iRows,int iCol)
{
  int i=0;
  int j=0;
  
   for(i=0;i<iRows;i++)
   {
      for(j=0;j<iCol;j++)
       if((i%2)==1)
       {
       printf("%c \t",(97+i));
       
       }
       else
       {
          printf("%c \t",(65+j));
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