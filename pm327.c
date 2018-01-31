#include<stdio.h>
int main(void)
{
char ch;
printf("\nEnter your choice");
scanf("%c",&ch);
if(ch>=65&&ch<=90||ch>=97&&ch<=122)
{
printf("\n ALPHABET");
}
else
{
printf("\nNUMBER");
}
return 0;
}
