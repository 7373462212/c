#include<stdio.h>
int main(void)
{
    int x,y;
    printf("\nEnter the number :");
    scanf("%d",&y);
    x=y&(y-1);
    if(x==0)
    {
        printf("\nIt is a power of two",y);
    }
    else
    {
        printf("\nIt is not a power of two",y);
    }
    return 0;
}
