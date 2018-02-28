#include<stdio.h>
int main(void)
{
int n,rm,re,digit;
printf("\nEnter the number:");
scanf("%d",&n);
while(n!=0)
{
rm=n%10;
re=r*10+rm;
n=n/10;
}
while(re!=0)
{
digit=re%10;
re=re/10;
printf("%d",digit);
}
return 0;
}
