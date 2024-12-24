//C Program to print the factorial of the number
#include<stdio.h>
int fact(int n)
{
    int fac=1;
    for(int i=1;i<=n;i++)
        fac*=i;
    return fac;
}
int main()
{
    int n;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    printf("\nFactorial of %d = %d",n,fact(n));
}