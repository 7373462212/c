#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter the numbers:");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("\nThe product of two number is:%d",c);
    if(c%2==0)
    {
        printf("\nThe number is even");
    }
    else
    {
        printf("\nThe number is odd");
        }
        return 0;
        }
