#include<stdio.h>
#include<math.h>
void main()
{
    float x,y,r,t;
    printf("\nEnter the abscissa (x-coordinate) of the point (x,y): ");
    scanf("%f",&x);
    printf("\nEnter the ordinate (y-coordinate) of the point (x,y): ");
    scanf("%f",&y);
    printf("\nThe Polar Co-ordinates are:");
    r = sqrt((pow(x,2))+pow(y,2));
    printf("\nThe value of r = %.3f ",r);
    t = atan((y/x));
    printf("\nThe value of theta = %.3f",t);

}