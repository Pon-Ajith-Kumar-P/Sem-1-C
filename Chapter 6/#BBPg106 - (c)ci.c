#include<stdio.h>
#include<math.h>
int main()
{
    float p,n,r,q,ci;
    for(int i=1;i<=10;i++)
    {
        printf("\nUser Number : %d",i);
        printf("\nEnter the principal amount : ");
        scanf("%f",&p);
        printf("\nEnter the rate of interest : ");
        scanf("%f",&r);
        printf("\nEnter the number of years  : ");
        scanf("%f",&n);
        printf("\nEnter the compounding period  : ");
        scanf("%f",&q);
        ci = p * pow((1+r/q),(n*q));
        printf("\nTotal amount = %.3f\n",ci);
    }
}