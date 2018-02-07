#include<stdio.h>
int main()
{
    int a[4],i,j,b;
    printf("\nEnter the numbers:");
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]<a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    printf("\nThe maximum number is %d",a[0]);
    printf("\nThe minimum number is %d",a[3]);
    return 0;
}
