#include<stdio.h>
int main()
{
    printf("\nLeap year from 1900 to 2100");
    int a=1900,b=2100;
    while(a<=b)
    {
        if(a%400==0 || (a%100!=0 && a%4==0))
            printf("\n%d",a);
        a++;
    }
    return 0;
}