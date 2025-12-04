/*
    Algorithum
    START
        Accept number And store as no
        Divide no by 2
        If the remender is 0 
            then display as even
        Otherwise
            Display as odd
    Stop
*/

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;
    
    if(iRem == 0)
    {
        printf("it is Even number\n");
    }
    else
    {
        printf("it is Odd number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}