#include<stdio.h>
#include<string.h>
int main(void){
    char s[30];
    int i,n,spe=0;
    printf("\nEnter the string :");
    scanf("%s",&s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='!','@','#','$','%','^','&','*','(',')'||'0'<=s[i]<='9')
        {
             spe=spe+1;
        }
    }
    printf("\n%d",spe);
    return 0;
    }
