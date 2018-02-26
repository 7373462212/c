#include<stdio.h>
int main(void)
{
    int n,count=0;
    printf("\nEntre the number :");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("\nThe number of numeric digit is %d",count);
    return 0;
}
