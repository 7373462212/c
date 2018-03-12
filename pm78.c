#include<stdio.h>
int main()
{
    int z;
    printf("\nEnter the number:");
    scanf("%d",&z);
    if(z%13==0)
    {
        printf("\nYES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
