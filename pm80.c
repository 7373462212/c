#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    while(n>0)
    {
    	x=n%10;
    	if(x%2!=0)
    	{
    		printf("%d is an odd number",x);	
		}
		n=n/10;
	}
	return 0;
}
