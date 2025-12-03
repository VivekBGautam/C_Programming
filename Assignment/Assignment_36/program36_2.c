// Program to convert string into uppercase (recursive behavior not used)

////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   struprX
//  Description     :   Converts lowercase letters in string to uppercase
//  Input           :   String
//  Output          :   String
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   04/12/2025
//
////////////////////////////////////////////////////////////////////////

void struprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str  = *str - 32;
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

    void struprX(Arr);

    printf("Updated string is : %s",Arr);

    return 0;
}