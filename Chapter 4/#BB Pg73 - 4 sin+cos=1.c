#include<stdio.h>
#include<math.h>
int main()
{
    float angle;
    printf("\nEnter the value of the angle (in degrees): ");
    scanf("%f",&angle);
    angle = angle * 3.14 /180;
    float c = pow(sin(angle),2) + pow(cos(angle),2);
    printf("\nThe value of sin^2 x + cos^2 x = %.2f ",c);
    (c==1)?printf("\nHence hhe value of sin^2 x + cos^2 x = 1"):printf("\nHence the value of sin^2 x + cos^2 x != 1");
    return 0;
}