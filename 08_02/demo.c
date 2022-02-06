
//accept number from useerand print small// mediaum// greater//
#include <stdio.h>

void Number(int iNo)
{
      if (iNo==1)
      {
          printf("one\n");
      }
     else if (iNo==2)
      {
          printf("two\n");
      }
     else if (iNo==3)
      {
          printf("three\n");
      }
     else if (iNo==4)
      {
          printf("four\n");
      }
      else if (iNo==5)
      {
          printf("five\n");
      }
     else if (iNo==6)
      {
          printf("six\n");
      }
     else if (iNo==7)
      {
          printf("seven\n");
      }
     else if (iNo==8)
      {
          printf("eight\n");
      }
     else 
       
         printf("nine\n");
      
      
}

int main()
{
	
	int iValue = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Number(iValue);
	
	return 0;
}
