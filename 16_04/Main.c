/*Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output : 1 2 3 4 5
-1 -2 -3 -4 -5
1 2 3 4 5
-1 -2 -3 -4 -5
1 2 3 4 5
*/



#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	int i=0,j=0,iCnt1=1;
	int iCnt2 = -1;

	for (i = 1;i <= iRow;i++)
	{	
	
		for (j=1;j<=iCol;j++)
		{
			if((i%2) == 1)
			{
				printf("%d\t",iCnt1);
				iCnt1++;
				
			}
			else
				printf("%d\t",iCnt2);
				iCnt2--;
		}
		
		
		iCnt1=1;
		iCnt2=-1;
		printf("\n");
		
	}
		
}
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows and columns");
scanf("%d %d",&iValue1, &iValue2);
Pattern(iValue1, iValue2);
return 0;
}
