#include<stdio.h>
int main()
{
    int i,n,nt,x=0,y=1;
    printf("\nEnter the number :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d",x);
        nt=x+y;
        x=y;
        y=nt;
    }
    return 0;
}
