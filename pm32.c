#include <stdio.h>
#include<string.h>
int main() 
{
	char ch[100];
	int m,i=0,count=1;
	scanf("%[^\t\n]s",ch);
	n=strlen(ch);
	while(i<n)
	{
	   if(ch[i]==' ')
	    {
	        count++;
	    }
      i++;
	}
	printf("%d",count);
	return 0;
}
	    
