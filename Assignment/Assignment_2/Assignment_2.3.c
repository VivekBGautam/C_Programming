// Accept the Number from user and if Number is less than 10 print "Hello" Otherwise print "Demo"

#include<stdio.h>

void Display(int iNo)
{

    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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