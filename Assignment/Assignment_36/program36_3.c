// Program to convert string form lowercase into uppercase And upper case to lowercase

////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   strlwrX
//  Description     :   it is used to toggle the string
//  Input           :   String
//  Output          :   String
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   04/12/2025
//
////////////////////////////////////////////////////////////////////////

void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str  = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str  = *str + 32;
        }
        str++;
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50];

    printf("Enter the string :\n");
    scanf("%[^\n]s",Arr);

    strtoggleX(Arr);

    printf("Updated string is : %s",Arr);

    return 0;
}