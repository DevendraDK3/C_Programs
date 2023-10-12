#include<stdio.h>

float CelsiusToFahrenheit(float fValue)
{
    float fRet = 0.0f;
    fRet = (fValue * (9.0/5.0)) + 32;
    return fRet;
}

int main()
{
    float fInput = 0.0f;
    float fRet = 0.0f;

    printf("Input Celsius temprature : ");
    scanf("%f",&fInput);

    fRet = CelsiusToFahrenheit(fInput);
    printf("Fahrenheit temprature : %f",fRet);
    
    return 0;
}