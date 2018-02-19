#include <stdio.h>
#include<string.h>
int main() 
{
	char ch[50];
	int m,i,count=0;
	scanf("%[^\t\n]s",ch);
	m=strlen(ch);
	while(i<m)
	{
	   if(ch[i]>='0' && ch[i]<='9')
	    {
	        count++;
	    }
	    i++;
	}
	printf("%d",count);
	return 0;
}
	    
