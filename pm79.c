#include<stdio.h>
#include<conio.h>
int main()
{
 int x,y,z,st;
 printf("enter number 1");
 scanf("%d",&x);
 printf("enter number 2");
 scanf("%d",&y);
 z=x*y;
 printf("the product of the two numbers is %d",z);
 st=sqrt(z);
 if((st==x)&&(st==y))
 {
    printf("\nthe number is a perfect square");
  }
 else
 {
   printf("\nthe number is not a perfect square");
  }
   return 0;
   }
