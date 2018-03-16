#include<stdio.h>
int main()
{
    int a[10],i,n,k;
    printf("\nEnter the maximum number:");
    scanf("%d",&n);
    printf("\nEnter the position :");
    scanf("%d",&k);
    printf("\nEnter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==a[k-1])
        {
            printf("%d",a[k-1]);
        }
    }
    return 0;
}
