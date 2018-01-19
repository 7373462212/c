#include <stdio.h>

int main(void) {
	int a=2,b=6,n,i;
	for(i=a;i<=b;i++)
	{
		if((i%2)==0)
		{
			n=i+1;
			printf("\n%d",i);
		}
	}
		return 0;
}
