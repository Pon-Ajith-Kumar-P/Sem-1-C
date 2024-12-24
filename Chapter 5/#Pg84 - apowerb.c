#include<stdio.h>
int power(int b,int n)
{
    if(n==0)
        return 1;
    else
        return b*power(b,n-1);
}
int main()
{
    int b,n;
    printf("\nEnter the base: ");
    scanf("%d",&b);
    printf("\nEnter the exponent term : ");
    scanf("%d",&n);
    printf("\n%d  to the power of %d = %d",b,n,power(b,n));
    return 0;
}