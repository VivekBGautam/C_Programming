// Program used to count white space form string

////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountWhiteSpace
//  Description     :   used to count white space form string
//  Input           :   String
//  Output          :   Integer
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   04/12/2025
//
////////////////////////////////////////////////////////////////////////

int CountWhiteSpace(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^\n]s",Arr);

    iRet = CountWhiteSpace(Arr);

    printf("Number of white space in string is  : %d",iRet);

    return 0;
}