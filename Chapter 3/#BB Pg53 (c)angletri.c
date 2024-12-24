#include<stdio.h> 
void main() 
{ 
        float a,b,c; 
        printf("\nEnter the value of first angle (in degrees) : "); 
        scanf("%f",&a); 
        printf("\nEnter the value of second angle (in degrees) : "); 
        scanf("%f",&b); 
        printf("\nEnter the value of third angle (in degrees) : "); 
        scanf("%f",&c); 
        float sum=a+b+c;
        if(a<=0 || b<=0 || c<=0 || a>=180 || b>=180 || c>=180)
            printf("\nThe given angle is invalid and not make a triangle");
        else if(sum==180)
            printf("\nThe given angles will make a triangle");
        else
            printf("\nThe given angles will not make a triangle");
} 
