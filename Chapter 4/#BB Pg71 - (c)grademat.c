#include<stdio.h>
int main()
{
    float a,b,c;
    printf("\nEnter HARDNESS : ");
    scanf("%f",&a);
    printf("\nEnter CARBON CONTENT : ");
    scanf("%f",&b);
    printf("\nEnter TENSILE STRENGTH : ");
    scanf("%f",&c);
    int grade;
    if(a>50 && b<0.7 && c>5600)
        grade = 10;
    else if(a>50 && b<0.7 && c<=5600)
        grade = 9;
    else if(a<=50 && b<0.7 && c<5600)
        grade = 8;
    else if(a>50 && b>=0.7 && c<5600)
        grade = 7;
    else if(a>50 || b<0.7 || c>5600)
        grade = 6;
    else
        grade = 5;
    printf("\nThe grading for the material = %d",grade);
}