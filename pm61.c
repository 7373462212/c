#include<stdio.h>
int main(void)
{
    char s[20];
    int i,n;
    printf("\nEnter the string:");
    scanf("%s",&s);
    printf("\nEnter the number :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}
