#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2;
    printf("\nThe general form of Quadratic Equation is:");
    printf("\nax^2 + bx + c = 0");
    printf("\nEnter the co-efficient of x^2 term      : ");
    scanf("%f",&a);
    printf("\nEnter the co-efficient of x term        : ");
    scanf("%f",&b);
    printf("\nEnter the co-efficient of constant term : ");
    scanf("%f",&c);
    float disc = b*b - 4*a*c;
    printf("\nThe value of the discriminant = %f",disc);
    if(disc==0)
    {
        printf("\nThe roots of the equation are real and equal");
        root1=-b/(2*a);
        root2=-b/(2*a);
        printf("\nThe roots of the equation are %.2f and %.2f",root1,root2);
    }
    else if(disc>0)
    {
        printf("\nThe roots of the equation are real and unequal");
        root1=-b+sqrt(disc)/(2*a);
        root2=-b-sqrt(disc)/(2*a);
        printf("\nThe roots of the equation are %.2f and %.2f",root1,root2);
    }
    else if(disc<0)
    {
        printf("\nThe roots of the equation are not real");
        float real = -b/(2*a);
        float img = sqrt(-disc)/(2*a);
        printf("\nThe roots of the equation are %.2f + %.2f i and %.2f - %.2f i",real,img,real,img);
    }

    return 0;
}