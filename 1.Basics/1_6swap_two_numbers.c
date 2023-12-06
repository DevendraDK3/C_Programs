#include<stdio.h>

void swapT(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapW(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main()
{
    int iNum1 = 0;
    int iNum2 = 0;
    printf("Enter first number\n");
    scanf("%d",&iNum1);

    printf("Enter second number\n");
    scanf("%d",&iNum2);

    swapT(&iNum1, &iNum2);
    printf("Numbers after swapping iNum1 = %d, iNum2 = %d\n",iNum1,iNum2);

    swapW(&iNum1,&iNum2);
    printf("Numbers after swapping iNum1 = %d, iNum2 = %d\n",iNum1,iNum2);

    return 0;
}