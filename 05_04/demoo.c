

// write  a program which accepts three numbers and print multiplications   //

#include<stdio.h>

int Mult(int iNo1, int iNo2, int iNo3)
{
   int iResult=0;

    iResult=iNo1*iNo2*iNo3;

    return iResult;
}
int main()
{
    int iValue1,iValue2,iValue3 =0;

    int iRet=0;

    printf("enter three numbers\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet=Mult(iValue1,iValue2,iValue3);

    printf("the multiplication is== %d\n",iRet);

    
    return 0;
}
