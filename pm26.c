#include <stdio.h>
int main(void) {
    int i,j,b[150],n,t;
    printf("\nEnter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    }
	return 0;
}
