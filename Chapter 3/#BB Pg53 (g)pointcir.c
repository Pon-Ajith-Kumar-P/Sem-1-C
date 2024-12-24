#include<stdio.h>
#include<math.h>
void main() 
{
    float x,y,r,d;
    printf("\nEnter the value of centre of circle (x,y) : ");
    scanf("%f%f",&x,&y);
    printf("\nEnter the radius of the circle : ");
    scanf("%f",&r);
    d=sqrt(x*x+y*y);
    printf("\nThe value of d = %f",d);
    if(d==r)
    {
        printf("\nThe given point lies on the circle");
    }
    else if(d<r)
    {
        printf("\nThe given point lies inside the circle");
    }
    else
    {
        printf("\nThe given point lies outside the circle");
    }
}