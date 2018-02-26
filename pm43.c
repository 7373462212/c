#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[20],s1[20],i,j;
    printf("\nEnter the string:");
    scanf("%s",&s);
    printf("\nEnter the string:");
    scanf("%s",&s1);
    while(s[i]!=NULL)
    {
        i++;
    }
    while(s1[j]!=NULL)
    {
        s[i]=s1[j];
        i++;
        j++;
    }
    printf("The string is %s",s);
    return 0;
}
