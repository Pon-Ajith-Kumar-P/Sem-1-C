#include<stdio.h>
#include<math.h>
void main()
{
    float t,v,wcf;
    printf("\nEnter the temperature : ");
    scanf("%f",&t);
    printf("\nEnter the wind velocity : ");
    scanf("%f",&v);
    wcf=35.74+(0.6215*t)+(0.4275*t - 35.75)*pow(v,0.16);
    printf("\nThe wind chill factor = %f",wcf);
}