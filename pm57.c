#include<stdio.h>
int main()
{
    int a,b,t=0;
    printf("\nEnter the two numbers:");
    scanf("%d%d",&a,&b);
    printf("\nThe two numbers before swapping:%d %d",a,b);
    t=a;
    a=b;
    b=t;
    printf("\nThe two numbers after swapping:%d %d",a,b);
    return 0;
}
