#include<stdio.h>
int main()
{
int num,r,temp,sum=0;
printf("enter an number: ");
scanf("%d",&num);
temp=num;
while(num!=0)
{
r=num%10;
num=num/10;
sum=sum+(r*r*r);
}
if(sum==temp)
{
printf("%d is a armstrong",temp);
}
else
{
printf("%d ia not an arnstrong",temp);
}
return 0;
}
