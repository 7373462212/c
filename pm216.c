#include <stdio.h>
int main(void) {
int i,c,n;
printf("\nEnter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	if(i%n==0)
	{	c++;
	}
}
if(c==2)
{
	printf("\nGiven number is a prime number");
}
else
{
	printf("\nGiven number is not a prime number");
}
return 0;
}
