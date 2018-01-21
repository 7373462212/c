#include <stdio.h>
int main(void) {
	int a,b;
	printf("\nEnter the number ");
	scanf("%d",&a);
	printf("\nenter the number");
	scanf("%d",&b);
	a=a^b;
	b=a^b;
	a=b^a;
	printf("\nBefore swapping %d",a);
	printf("\nAfter swappping %d",b);
	return 0;
}
