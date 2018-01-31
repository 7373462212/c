#include<stdio.h>
int main(void){
    int a[4],i;
    printf("\nEnter the elements:");
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        printf("%d %d\n",a[i],i);
    }
    return 0;
}
