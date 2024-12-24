#include<stdio.h>
int main()
{
    float a,b,c;
    printf("\nEnter side-1: ");
    scanf("%f",&a);
    printf("\nEnter side-2: ");
    scanf("%f",&b);
    printf("\nEnter side-3: ");
    scanf("%f",&c);
    if(a==b && b==c && a==c)
        printf("\nThe given sides form an equilateral triangle");
    else if(a==b || b==c || a==c)
        printf("\nThe given sides form an isosceles triangle");
    else if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b))
        printf("\nThe given sides form a right angled triangle");
    else if(a!=b && b!=c && a!=c)
        printf("\nThe given sides form a scalene triangle");
    return 0;
}