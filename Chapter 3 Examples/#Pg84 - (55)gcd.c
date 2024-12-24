#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("\nEnter Number 1: ");
    scanf("%d",&a);
    printf("\nEnter Number 2: ");
    scanf("%d",&b);
    int dividend,divisor,rem;
    if(a>b)
        dividend = a;
        divisor = b;
    if(a<b)
        dividend = b;
        divisor = a;
    while(divisor==0)
    {
        rem=dividend%divisor;
        dividend = divisor;
        divisor = rem;
    }
    printf("\nThe GCD of %d and %d = %d",a,b,dividend);
}