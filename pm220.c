#include <stdio.h>
int main(void) {
	int i=5,n,c,num=1;
	printf("\nEnter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		c=num*i;
		num++;
		printf("\nmultiple of a given number %d",c);
	}
	return 0;
}
