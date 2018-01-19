#include <stdio.h>

int main(void) {
	int n=22,rev=0,rem,t;
	t=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(t==rev)
	{
		printf("%d is a palindrome");
	}
	else
	{
		printf("%d ia not a palindrome");
	}
return 0;
}
