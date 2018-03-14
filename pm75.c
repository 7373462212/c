#include<stdio.h>
#include<string.h>
int main(void)
{
    char ch[10];
    int a,m;
    printf("Enter the string:");
    scanf("%s",ch);
    a=strlen(ch);
    m=a/2;
    ch[m]='*';
    printf("%s",ch);
    return 0;
}
