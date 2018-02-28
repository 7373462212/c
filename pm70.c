#include<stdio.h>
int main(void){
    int n,s,a;
    printf("\nEnter the number :");
    scanf("%d",&n);
    s=n&(n-1);
    if(n%2==0)
    {
        a=n*2;
    }
    printf("%d",a);
    return 0;
}
