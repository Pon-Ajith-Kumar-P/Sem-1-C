#include<stdio.h>
#include<math.h>
void main() 
{
    	float p,n,r;
    	printf("\nEnter the Principal Amount : Rs. ");
    	scanf("%f",&p);
    	printf("\nEnter the number of years : ");
    	scanf("%f",&n);
    	printf("\nEnter the rate of interest : ");
    	scanf("%f",&r);
    	float si=(p*n*r)/100;
    	printf("\nThe Simple Interest is Rs. %f",si);
    	float ci=p*pow((1+r/100),n);
    	printf("\nThe Compound Interest is Rs. %f",ci);
}
