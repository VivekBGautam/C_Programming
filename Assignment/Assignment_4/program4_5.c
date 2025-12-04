// write a program which accept the number from user and Dispaly diffrence between factor and non factor

////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DiffBetwFactorAndNonFactor
//  Description     :   Used to Display Differece Between Factor And Non Factor
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   19/10/2025
//
////////////////////////////////////////////////////////////////////////

int DiffBetwFactorAndNonFactor(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }

    printf("%d Non factor \n",iSum1);
    printf("%d factor \n",iSum2);
    return iSum2 - iSum1;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number :\n");
    scanf("%d",&iValue);

    iRet = DiffBetwFactorAndNonFactor(iValue);

    printf("Summention of All Non factors : %d",iRet);

    return 0;
}