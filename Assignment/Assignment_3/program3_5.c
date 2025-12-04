////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckVowel
//  Description     :   Used to check given input charector vowels or not
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Vivek BhaurajGautam
//  Date            :   18/10/2025
//
////////////////////////////////////////////////////////////////////////

bool CheckVowel(char cChar)
{
    if((cChar >= 65) && (cChar <= 90))
    {
        cChar = cChar+32;
    }

    if((cChar == 'a') || (cChar == 'e') || (cChar == 'i') || (cChar == 'o') || (cChar == 'u'))
    {
        return true;
    }
    else
    {
        return false;
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
    bool bRet = false;

    printf("Enter the charector :\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("%c is A vowel \n",cValue);
    }
    else
    {
        printf("%c is A Not vowel \n",cValue);
    }


    return 0;
}