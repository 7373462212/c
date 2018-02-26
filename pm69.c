#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("\nEnter the two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        c=a-b;
    }
    else
    {
        c=b-a;
    }
    if(c%2==0)
    {
        printf("\nIt is even number %d",c);
    }
    else
    {
        printf("\nIt is an odd number %d",c);
    }
    return 0;
}
