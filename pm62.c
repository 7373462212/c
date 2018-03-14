#include <stdio.h>
#include<string.h>
int main()

{
	char c[10];
	scanf("%s",&c);
	int i,flag=0,n;
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(c[i]=='1' || c[i]=='0')
		{
			flag=1;
		}

		else

		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
    return 0;
}
