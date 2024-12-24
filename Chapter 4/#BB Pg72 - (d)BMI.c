#include<stdio.h>
int main()
{
    float w,h;
    printf("\nEnter the weight of your body (in kg): ");
    scanf("%f",&w);
    printf("\nEnter the height of your body (in m): ");
    scanf("%f",&h);
    float bmi=w/(h*h);
    printf("\nYour Body Mass Index (BMI) = %f \n\nResult:",bmi);
    if(bmi<15)
        printf("\nStarvation");
    else if(bmi>=15 && bmi<=17.5)
        printf("\nAnorexic");
    else if(bmi>=17.6 && bmi<=18.5)
        printf("\nUnderweight");
    else if(bmi>=18.6 && bmi<=24.9)
        printf("\nIdeal ");
    else if(bmi>=25 && bmi<=25.9)
        printf("\nOverweight");
    else if(bmi>=30 && bmi<=30.9)
        printf("\nObese");
    else
        printf("\nMorbidly Obese");
}