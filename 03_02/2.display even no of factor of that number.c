

//write a program which aceepts numbers from users and print the even factor of that number../

#include<stdio.h>

void EvenFactor(int iNo)
{
    int iRet=0;
    
    if(iNo<=0)
    {
       iNo=-iNo;
    }
    for(iRet=0;iRet<=iNo;iRet++)
    {
        if((iRet%2)==0)
        {
            printf("%d\n",iRet);
        }

    }

}

int main()
{
    int iValue=0;

    printf("enter the number\n");
    scanf("%d",&iValue);

    EvenFactor(iValue);
    
    return 0;
}