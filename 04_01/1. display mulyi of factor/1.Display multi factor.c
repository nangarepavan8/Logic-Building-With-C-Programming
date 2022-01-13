
//write a program which number aceept from user and return display the multiplication of the factors  .///

//input= 12
//output= 1*2*3*4*6 ==144

//           13
//            1


#include<stdio.h>

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
        if ((iNo%iValue1)==0)
        {
          iMult=iMult*iValue1;
        
        }
        
    }
    return iMult;    

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter the number=\n");
    scanf("%d",&iValue);

    iRet=DisplayMult(iValue);

    printf("multiplication of the factor is %d  \n",iRet);

   return 0;
}