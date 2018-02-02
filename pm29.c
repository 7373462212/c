#include <stdio.h>
int main()
{
    int tot_min,hrs,mins;
    printf("\nEnter the total minute:");
    scanf("%d",&tot_min);
    hrs=tot_min/60;
    mins=tot_min%60;
    printf("\nThe hours and mintue is:%d %d",hrs,mins);
    return 0;
}
