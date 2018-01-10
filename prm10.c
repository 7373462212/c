#include<stdio.h>
#include<conio.h>
int main()
{
int n,count;
printf("\nEnter the number");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
printf("\nThe number of integer %d",count);
}
return 0;
}
