#include<stdio.h>
int main(void){
    char ch[30],i,temp=0;
    int count=0;
    printf("\nEnter the sentence:");
    scanf("%c",&ch);
    if((ch[i]<='a')||(ch[i]>='z')||(ch[i]<='A')||(ch[i]>='Z'))
    {
        temp++;
    }
    if((ch[i]>='0')||(ch[i]<='9'))
    {
        count++;
    }
    if(temp>=count)
    {
        printf("YES,It contain more number of characters");
    }
    else if(count>=temp)
    {
        printf("YEs,It contain more number of numbers");
    }
    else
    {
        printf("There is no input");
    }
    return 0;
}
