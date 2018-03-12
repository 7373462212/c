#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter the L and R:");
    scanf("%d%d",&a,&b);
    printf("\nEnter the number:");
    scanf("%d",&c);
    if(a<c<b)
    {
        printf("\nYES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
