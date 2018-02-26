#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[20],t[20];
    int i,j;
    printf("\nEnter the first string :");
    scanf("%s",&s);
    printf("\nEnter the second string :");
    scanf("%s",&t);
    if(s[i]==t[j])
    {
        printf("\nThe strings are equal:%s",s);
    }
    else if(s[i]>t[j])
    {
        printf("\nThe first string is greater:%s",s);
    }
    else
    {
        printf("\nThe second string is greater:%s",t);
    }
    return 0;
}
