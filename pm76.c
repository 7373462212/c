#include <stdio.h>
void main()
{
int m,c=0,i;
printf("Enter the number:");
scanf("%d",&m);
for(i=2;i<m;i++)
{
if((m%i)==0)
{
c++;
}
}
if(c==0)
{
printf("No");
}
else
{
printf("Yes");
}
}
