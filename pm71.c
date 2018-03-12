#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10];
    int c=0,n,i;
    printf("\nEnter the string:");
    scanf("%s",&ch);
    n=strlen(ch);
    for(i=0;i<n;i++)
    {
        if(ch[i]!=ch[n-1-i])
        {
            c++;
        }
        
    }
   if(c==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
