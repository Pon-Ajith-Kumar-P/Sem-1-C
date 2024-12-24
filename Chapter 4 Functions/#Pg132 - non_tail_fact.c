//C Program to print the factorial of the number in non recursion style
//So here no pending operation is to be performed
#include<stdio.h>
int fact1(int n);
int fact2(int n,int res);
int fact1(int n)
{
    return fact2(n,1);
}
int fact2(int n,int res)
{
    if(n==0)
        return 1;
    return fact2(n-1,n*res);
}
int main()
{
    int n;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    printf("\nFactorial of %d = %d",n,fact1(n));
}