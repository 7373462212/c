#include<stdio.h>
int main(void){
    int n;
    char ch[80],i;
    printf("\nEnter the number:");
    scanf("%d",&n);
    printf("\nEnter the characters:");
    scanf("%s",&ch);
    for(i=0;i<n;i++)
    {
        printf("%s",ch);
    }
    return 0;
    }
