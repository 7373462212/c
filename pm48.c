#include<stdio.h>
int main()
{
    int i,j,b,a[5];
    printf("\nEnter the elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    printf("\nThe middle element is %d",a[2]);
    return 0;
    }
