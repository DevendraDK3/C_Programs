#include<stdio.h>

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iResult = 0;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter Second number : ");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;

    printf("Sum of two numbers is : %d",iResult);

    return 0;
}