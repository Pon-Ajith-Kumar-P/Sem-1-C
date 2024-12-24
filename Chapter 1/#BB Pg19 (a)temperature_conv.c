#include<stdio.h>
void main()
{
    float fah;
    float cel;
    printf("\nEnter the temperature of city (in F) : ");
    scanf("%f",&fah);
    cel=(5*(fah-32))/9;
    printf("\nThe Celcius Value = %.2f degrees",cel);
}