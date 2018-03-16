#include<stdio.h>
int main()
{
    char z[20];
    int i,n;
    printf("\nEnter the string:");
    scanf("%s",&z);
    n=strlen(z);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%c",z[i]);
        }
    }
    printf("  ");
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            printf("%c",z[i]);
        }
    }
    return 0;
}
