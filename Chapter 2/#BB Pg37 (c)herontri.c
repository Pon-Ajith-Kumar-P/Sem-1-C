#include <stdio.h>
#include<math.h>
void main() 
{
    float a,b,c;
    printf("\nEnter the value of first side : ");
    scanf("%f",&a);
    printf("\nEnter the value of second side : ");
    scanf("%f",&b);
    printf("\nEnter the value of third side : ");
    scanf("%f",&c);
    float s,area;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nThe area of the triangle = %.3f sq.m",area);
}