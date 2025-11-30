// Program to Divide two Numbers

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Class Name      :   Demo
//  Function Name   :   Divide
//  Description     :   Used to perform Division of two number
//  Input           :   Integer, Integer
//  Output          :   Integer
//  Author          :   Vivek BhaurajGautam
//  Date            :   17/10/2025
//
////////////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo1 < iNo2)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);
    printf("Division is : %d \n",iRet);

    return 0;
}