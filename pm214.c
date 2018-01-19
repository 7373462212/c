#include <stdio.h>

int main(void) {
	int a=2,b=6,i,n=0;
	for(i=a;i<=b;i++)
	{
		if((i%2)!=0)
		{
			n=i+1;
			printf("%d",i);
		}
	}
}
	
