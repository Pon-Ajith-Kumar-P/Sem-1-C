#include<stdio.h>
void main()
{
    int a,b;
    printf("\nEnter Number 1: ");
    scanf("%d",&a);
    printf("\nEnter Number 2: ");
    scanf("%d",&b);
    printf("\nThe value before swapping are %d and %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nThe value after swapping are %d and %d",a,b);
}