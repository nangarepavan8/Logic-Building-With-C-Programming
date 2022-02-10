#include"Header.h"


void DisplayPattern(int iNo)
{
  if(iNo<0)
  {
    iNo=-iNo;
  }

  while(iNo!=0)
  {
    printf("$ *\t");

    iNo--;
  }
}
  
	
