#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("\nEnter the two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        c=a+b;
    }
    if(c%2==0)
    {
        printf("\nIt is even number");
    }
    else
    {
        printf("\nIt is an odd number");
    }
    return 0;
}
