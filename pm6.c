#include(iostream.h>
#include<conio.h>
int main()
{
int n;
printf("Enter the year");
scanf("%d",&n);
if(n%4==0)
{
printf("Given year is not aleap year");
}
else
{
printf("Given year is a leap year");
}
return 0;
}
