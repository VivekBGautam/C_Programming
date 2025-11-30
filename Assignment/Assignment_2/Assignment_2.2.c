// Accept the Number froam use and Print that number of * on Dispaly

#include<stdio.h>

void Display(int iNo)
{

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        printf("%d\t*\n",iNo);
        iNo--;
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