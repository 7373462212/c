#include<stdio.h>
int main(void)
{
    int n;
    printf("\nEnter the number :");
    scanf("%d",&n);
    if(n%7==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
