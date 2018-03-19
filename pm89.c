#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int c,i,j,t;
    printf("enter number");
    scanf("%[^\n]s",s);
    c=strlen(s);
    for(i=0;s[i]!='\0';i++)
    {
    for(j=i+1;j<c;j++)
    {
        if(s[i]>s[j])
        {
            t=s[i];
            s[i]=s[j];
            s[j]=t;
        }
    }   
    }
printf("%s",s);
return 0;
}
