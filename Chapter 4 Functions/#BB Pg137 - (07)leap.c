#include<stdio.h>
int leap(int year)
{
    if(year%400==0 || (year%100!=0 && year%4==0))
        return 0;
    return 1;
}
int main()
{
    int n;
    printf("\nEnter a year : ");
    scanf("%d",&n);
    if(leap(n)==0)
        printf("\nThe given year %d is a leap year",n);
    else
        printf("\nThe given year %d is not a leap year",n);
}