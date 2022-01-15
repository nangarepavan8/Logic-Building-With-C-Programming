
//write a program which number aceept from user and return display the non factors  .///


#include<stdio.h>

int DisplayDecend(int iNo)
{
    
    int iValue1=0;
    

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for ( iValue1=2;iValue1<=iNo/2;iValue1++)
    {
        if ((iNo%iValue1)==iNo)
        {
          printf("%d\n",iValue1);
        
        }
        
    }
    
}

int main()
{
    int iValue=0;
    
    printf("enter the number=\n");
    scanf("%d",&iValue);

    DisplayDecend(iValue);

   return 0;
}