#include<stdio.h>
int is_prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    printf("\nThe function returned %d which indicates ",is_prime(n));
    if(is_prime(n)==1)
        printf("a prime number");
    else
        printf("not a prime number");
}