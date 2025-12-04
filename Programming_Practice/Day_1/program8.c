/*
    Step 1 : Understand the problem statement 
    Step 2 : Write the Algorithum
    Step 3 : Decide the programming language
    Step 4 : Write the Program
    Step 5 : Teest the program
*/


/*
    Algoorithum

    START
        Accept first Number as No1
        Accept Second Number as No2
        Perform the Addition of No1 & No2
        Display the output on Screen
    STOP
*/

#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;
    fSum = fNo1 + fNo2;        // Business Logic
    return fSum;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is : %f \n",fRet);

    return 0;
}