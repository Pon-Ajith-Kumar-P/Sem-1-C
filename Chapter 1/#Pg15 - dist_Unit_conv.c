#include <stdio.h>
void main() 
{
    float dist,m,ft,inch,cm;
    printf("Enter the distance betweeen two cities (in km) -> ");
    scanf("%f",&dist);
    m=dist*1000;
    cm=m*100;
    inch=cm/2.54;
    ft=inch/12;
    printf("\nThe value in metre = %.2f m",m);
    printf("\nThe value in centimetre = %.2f cm",cm);
    printf("\nThe value in inches = %.2f inch",inch);
    printf("\nThe value in feet = %.2f feet",ft);

    
}