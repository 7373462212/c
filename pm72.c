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
        if((ch[i]=='a')||(ch[i]=='e')||(ch[i]=='i')||(ch[i]=='o')||(ch[i]=='u'))
        {
            c++;
        }
        
    }
   if(c==0)
    {
        printf("There is no vowels");
    }
    else
    {
        printf("%d vowels",c);
    }
    return 0;
}
