

// write a program which accpets total marks and obtained marks from user and display percentage //

#include<stdio.h>


float CheckPercentage(float fNo1, float fNo2)
{
    float fResult=0;

    fResult = (fNo2 / fNo1)*100

    return 0;
    

}

float main()
{
    float fTotMarks, fMarks =0;

    float fRet=0;

    printf("enter the total marks=\n");
    scanf("%f",&fTotMarks);

    printf("enter obtained marks=\n");
    scanf("%f",&fMarks);

    fRet=CheckPercentage(fTotMarks,fMarks);

    printf("your percentage is=%f",fRet);

    return 0;

}