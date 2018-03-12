#include <stdio.h>
int main()
{
int m,c=0,i;
printf("Enter the number:");
scanf("%d",&m);
for(i=2;i<m/2;i++)
{
if((m%i)==0)
{
c++;
}
}
if(c==0)
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
