// Accept Number from user and print that number of * on Display

#include<stdio.h>
#include<stdbool.h>

void PrintStar(int iNo)
{
   int iCnt = 0;

   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
        printf("*\n");
   }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    PrintStar(iValue);

    return 0;
}