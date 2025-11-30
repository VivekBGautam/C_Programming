// Accept the Number from user and Check wether the number is even or odd

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Value :\n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

     if(bRet == true)
    {
        printf("%d is EVEN Number ",iValue);
    }
    else 
    {
        printf("%d is ODD Number ",iValue);
    }

    return 0;
}