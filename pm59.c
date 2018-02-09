#include<stdio.h>
int main()
{
    int a[10],i,j,b;
    printf("\nEnter the number :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
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
return 0;
}
