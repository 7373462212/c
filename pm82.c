#include<stdio.h>
int main()
{
    float x,y,z;
    printf("\nEnter the number:");
    scanf("%f%f",&x,&y);
    z=x*y;
    printf("\nThe value is%0.5f",z);
    return 0;
}
