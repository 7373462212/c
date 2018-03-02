#include<stdio.h>
int main(void)
{
    int x,y,z;
    printf("\nEnter the number :");
    scanf("%d",&y);
    x=y&(y-1);
    if(x==0)
    {
      z=y*2;
    }
    printf("The nearest power is %d",z);
    return 0;
}
