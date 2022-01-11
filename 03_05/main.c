// accept character from user and check that charcter is voewel or not..

#include "Header.h"




int main()
{
    char cValue='\0';

    BOOL bRet=FALSE;

    printf("enter the character  \n");
    scanf("%c",&cValue);

    bRet=ChkChar(cValue);

    if (bRet==TRUE)
    {
        printf("this is the vowel key\n");
    }
    else
    {
        printf("this is not a vowel key\n");
    }   

    return 0;
}
