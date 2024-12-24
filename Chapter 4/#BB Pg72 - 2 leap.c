#include<stdio.h>
int main()
{
    int y;
    printf("\nEnter an year: ");
    scanf("%d",&y);
    int leap = (y%400==0)? 1 :((y%100!=0 && y%4==0) ? 1 : 0);
    if(leap == 1)
        printf("\n%d is a leap year",y);
    else
        printf("\n%d is not a leap year",y);
    //Another format
    (y%400==0)?printf("\n%d is a leap year",y):((y%100!=0 && y%4==0) ? printf("\n%d is a leap year",y) : printf("\n%d is not a leap year",y));
}