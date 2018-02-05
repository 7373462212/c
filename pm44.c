#include<stdio.h>
int main(void){
    int a,b,c;
    printf("\nEnter the first limit:");
    scanf("%d",&a);
    printf("\nEnter the second limit:");
    scanf("%d",&b);
    printf("\nEnter the number:");
    scanf("%d",&c);
    if((a<c)&&(c<b))
    {
        printf("\nThe given number is in the range:%d",c);
    }
    else
    {
        printf("\nThe given number is not in the range:%d",c);
    }
    return 0;
    }
