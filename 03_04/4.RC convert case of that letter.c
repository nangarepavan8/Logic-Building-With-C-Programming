
//  write a program which accept one character from user and display CONVERT that upper / lower case character on console//

#include<stdio.h>

void DisplayConvert(char cValue)
{
    char Char2=0;

    if('A'<=91)
    {
        printf("%C",cValue);
    }
    else if('A'<=121)
    {
        printf("%C",cValue);
    }
  
    
}

int main()
{
    char char1=0;
    printf("enter the character  =  \n");
    scanf("%c",char1);

    DisplayConvert(char1);



    return 0;
}