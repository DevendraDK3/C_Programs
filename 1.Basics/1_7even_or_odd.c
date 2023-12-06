#include<stdio.h>
#include<stdbool.h>

bool EvenOrOdd(int iValue)
{
    bool bFlag = false;
    if((iValue % 2) == 0)
    {
        bFlag = true;
    }
    return bFlag;
}

int EvenOdd(int iValue)
{
    if((iValue % 2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iNum = 0;
    bool bRet = false;
    int iRet = 0;

    printf("Enter first number\n");
    scanf("%d",&iNum);
    
    bRet = EvenOrOdd(iNum);
    if(bRet)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    iRet = EvenOdd(iNum);
    if(iRet == 1)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    return 0;
}