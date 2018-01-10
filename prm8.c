#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,p=0;
printf("\nEnter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
p=p+i;
printf("\nsum of numbers are p= ",p);
}
return 0;
}
