#include<stdio.h>
int main()
{
    int i,f=0;
    char ch[50];
    printf("Enter the String:");
    scanf("%s",&ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==ch[i+1])
            {
                f=1;
                break;
            }
    }
    if(f==1)
    {
        printf("The given string is not isogram");
    }
    else
    {
        printf("The given string is isogram");
    }
   return 0;
}
