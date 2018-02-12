#include<stdio.h>
int main()
{
    char a[10];
    int i,count=0;
    printf("\nEnter the character:");
    gets(a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
    }
