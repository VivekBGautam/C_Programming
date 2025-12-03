// Program to convert string into lowercase (recursive behavior not used)

////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   strlwrX
//  Description     :   Converts uppercase letters in string to lowercase 
//  Input           :   String
//  Output          :   String
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   04/12/2025
//
////////////////////////////////////////////////////////////////////////

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    strlwrX(Arr);

    printf("Updated string is : %s",Arr);

    return 0;
}