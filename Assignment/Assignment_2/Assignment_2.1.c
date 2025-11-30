// Accept the Number froam use and Print that number of * on Dispaly

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("*\n");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Value :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}