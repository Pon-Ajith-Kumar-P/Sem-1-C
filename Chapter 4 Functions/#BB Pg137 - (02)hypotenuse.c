#include<stdio.h>
#include<math.h>
float hypo(float a,float b)
{
    return sqrt(a*a+b*b);
}
int main()
{
    float a,b;
    printf("\nEnter base of the right triangle : ");
    scanf("%f",&a);
    printf("\nEnter height of the right triangle : ");
    scanf("%f",&b);
    printf("\nThe hypotenuse of the triangle = %.2f",hypo(a,b));
}