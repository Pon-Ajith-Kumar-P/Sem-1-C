#include<stdio.h>
int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int N;
    printf("\nEnter a number: ");
    scanf("%d",&N);
    printf("\nThe factorial of the number = %d",fact(N));
    return 0;
}