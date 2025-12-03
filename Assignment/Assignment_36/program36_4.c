// Program used to display only number from string

////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayDigit
//  Description     :   used to display only number from string
//  Input           :   String
//  Output          :   String
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   04/12/2025
//
////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%s",*str);
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

    void DisplayDigit(Arr);

    printf("Updated string is : %s",Arr);

    return 0;
}