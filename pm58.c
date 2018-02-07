#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter the two numbers:");
    scanf("%d%d",&a,&b);
    printf("\nThe two numbers before swapping:%d %d",a,b);
    a=a^b;
    b=b^a;
    a=b^a;
    printf("\nThe two numbers after swapping:%d %d",a,b);
    return 0;
}
