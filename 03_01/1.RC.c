//write a program which aceep the number from user and return that number of even numbers on screen ...//

// input== 7
// output== 2 4 6 8 10 12 14 


#include<stdio.h>

void DisplayEven(int iNo)
{
  int iRet=0;
 // int iNo=0;
  if(iNo<=0)
  {
      return ;
  }

 
  for (iRet=0;iNo>=iRet;iRet++)
  {
      
        if((iRet%2)==0)
          {
              if (iRet%2==0)
              {
                  printf("%d\n",iRet);
              }
              
         
          }
     

  }
  
  if(iRet==iNo)
  {
      return;
  }
  


}

int main()
{
    int iValue=0;

    printf("enter the number=\n");
    scanf("%d",&iValue);

    DisplayEven(iValue);
    

    return 0;
}