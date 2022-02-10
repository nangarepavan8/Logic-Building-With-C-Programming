/* 
  problem statment: Write a program which accept number from user and display that much time $and* on screen.

  input:2   output:$ * $ * 
  input:5   output:$ * $ * $ * $ * $ *     
*/

/*
  Algorithm:
	START
		Accept no from user and store into variable No.
		
		creater one counter cnt initialize to 0

		

		iterate loop till no becomes 0.
 	
			
			display $ *


		continue
			
	END

*/

#include"Header.h"


int main()
{
  
  int iValue=0;
  int iRet=0;

  printf("enter the number\n");
  scanf("%d",&iValue);

  //printf("inside main\n");

  DisplayPattern(iValue);
 
  return 0;

}
