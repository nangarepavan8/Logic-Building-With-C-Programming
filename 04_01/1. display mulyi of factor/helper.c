#include "Header.h"

int DisplayMult(int iNo)
{
    int iMult=0;
    int iValue1=0;
    

    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for ( iValue1=2;iValue1<iNo;iValue1++)
    {
        if ((iNo%iMult)==0)
        {
          iMult=iMult*iValue1;
        
        }
        
    }
    return iMult;    

}
