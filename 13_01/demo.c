//input=   5
//output=   A B C D E   


#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    char iCnt;
    
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("%c\t",(65+iCnt));
    }


}

int main()
{
    int iValue=0;
    

    printf("enter the number=\n");
    scanf("%d",&iValue);
    Pattern(iValue);
 

    return 0;
}