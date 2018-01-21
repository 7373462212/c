#include <stdio.h>
int main(void) {
	int i,c,n,a=1,b=10;
	printf("\nEnter the number");
	scanf("%d",&n);
	if(a<b)
	{
	for(i=1;i<=n;i++)
	{
		c++;
	}
	}
	if(c==2)
	{
		printf("\nThe prime number is %d",c);
	}
	else
	{
		printf("\nThere is no prime number");
	}
	return 0;
	}
