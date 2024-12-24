#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("\nEnter number to find its factorial : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact*=i;
    printf("\nThe factorial of %d = %d",n,fact);
    return 0;
}