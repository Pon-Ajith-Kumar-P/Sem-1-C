#include<stdio.h>
#include<math.h>
void main()
{
    float theta,s,c,t;
    printf("\nEnter the value of angle (in degrees) : ");
    scanf("%f",&theta);
    theta=theta*3.14/180;
    s=sin(theta);
    c=cos(theta);
    t=tan(theta);
    printf("\nsin(%f) = %f",theta,s);
    printf("\ncos(%f) = %f",theta,c);
    printf("\ntan(%f) = %f",theta,t);
}