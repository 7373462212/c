#include <stdio.h>
int main()
{
	intx,y,g,lcm,i;
	scanf("%d %d",&x,&y);
	for(i=1;i<=x&&i<=y;i++)
  {
	  if(x%i==0 && y%i==0)       
	  {
	      g=i;
	  }
	}
	lcm=(x*y)/g;
	printf("lcm of %d and %d is %d",x,y,lcm);
	return 0;
}
