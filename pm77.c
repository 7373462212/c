#include <stdio.h>
void main()
{
int z,i;
printf("Enter the number:");
scanf("%d",&z);
printf("The factors are:");
for(i=1;i<=z;i++)
{
   if((z%i)==0)
   {
       printf("%d",i);
   }
}
return 0;
}
