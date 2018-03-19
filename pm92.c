#include<stdio.h>
int main()
{
    int i,n,s=0,a[10];
    printf("\nEnter the number:");
    scanf("%d",&n);
    printf("\nEnter the number of elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("\nThe sum of all numbers is %d",s);
    return 0;
}
