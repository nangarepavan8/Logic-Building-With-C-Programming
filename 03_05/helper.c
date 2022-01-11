#include "Header.h"

BOOL ChkChar(char cValue1)
{
    //char bRet='\0';

    if ((cValue1 == 'a')|| (cValue1 =='e')||(cValue1 =='i')||(cValue1 =='o')||(cValue1 =='u') || (cValue1 == 'A')|| (cValue1 =='E')||(cValue1 =='I')||(cValue1 =='O')||(cValue1 =='U') )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
