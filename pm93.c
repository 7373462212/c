#include<stdio.h>
int main()
{
    float c,k;
    printf("\nEnter the temperature in celsius:");
    scanf("%f",&c);
    k=c+273.15;
    printf("\nThe temperature in kelvin is %.3f",k);
    return 0;
}
