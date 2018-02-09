#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter the number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("\nThe given number is even:%d",a);
    }
    else
    {
        b=a+1;
        printf("\nThe nearest even number is :%d",b);
    }
    return 0;
}
