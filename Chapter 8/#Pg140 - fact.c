#include<stdio.h>
int fact(int a)
{
    if(a==0 || a==1)
        return 1;
    return a*fact(a-1);
}
int main()
{
    int x;
    printf("\nEnter Number to find its Factorial : ");
    scanf("%d",&x);
    printf("\nFactorial = %d",fact(x));
}
