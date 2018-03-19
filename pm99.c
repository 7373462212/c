#include<stdio.h>
int main()
{
    int x,y,z,w;
    printf("\nEnter the number :");
    scanf("%d%d%d",&x,&y,&z);
    w=x*y%z;
    printf("\nThe value is %d",w);
    return 0;
}
