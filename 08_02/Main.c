//Accept single digit number from user and print it into word.

#include <stdio.h>


void Display(int iNo)
{
	switch (iNo)
	{
		case 0:
			printf("zero");
			break;
		case 1:
			printf("one");
			break;
		case 2:
			printf("two");
			break;
		case 3:
			printf("three");
			break;
		case 4: 
			printf("Four ");
			break;
		case 5: 
			printf("Five ");
			break;
		case 6: 
			printf("Six ");
			break;
		case 7: 
			printf("Seven ");
			break;
		case 8: 
			printf("Eight ");
			break;
		case 9: 
			printf("Nine ");
			break;
	}
	
			
	
	
}


int main()
{
	
	int iValue = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);
	Display(iValue);	
	
	return 0;
}



