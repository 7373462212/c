#include<stdio.h>
int main(void)
{
    int z;
    printf("\nEnter the number :");
    scanf("%d",&z);
    while((z%10)!=0)
    {
        z++;
    }
    printf("%d",z);
    return 0;
}
