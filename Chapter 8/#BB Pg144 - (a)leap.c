#include<stdio.h>
void leap(int y)
{
    if(y%400==0 || (y%100!=0 && y%4==0))
        printf("\nThe given year %d is a leap year.",y);
    else
        printf("\nThe given year %d is not a leap year.",y);
}
int main()
{
    int x;
    printf("\nEnter a year to check leap year or not : ");
    scanf("%d",&x);
    leap(x);
}