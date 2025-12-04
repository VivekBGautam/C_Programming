////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ConvertCharector
//  Description     :   Used to chenge the case of given charector
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Vivek BhaurajGautam
//  Date            :   18/10/2025
//
////////////////////////////////////////////////////////////////////////

void ConvertCharector(char cChar)
{
    if((cChar >= 'a') && (cChar <= 'z'))
    {
        printf("%c",cChar-32);
    }
    else
    {
        printf("%c",cChar+32);
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the Charector : \n");
    scanf("%c",&cValue);

    ConvertCharector(cValue);

    return 0;
}