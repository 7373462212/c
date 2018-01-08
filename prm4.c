#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("\nEnter the number");
scanf("%d%d%d",&a&b&c);
if(a>b&&a>c)
{
printf("\nThe largest number is a=%d",a);
}
elseif(b>a&&b>c)
{
printf("\nThe largest number is b=%d",b);
}
else
{
printf("\nThe largest number is c=%d",c);
}
return 0;
}
