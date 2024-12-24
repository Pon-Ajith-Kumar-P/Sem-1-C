#include<stdio.h>
int checkprime(int n)
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
    if(checkprime(n)==0)
        printf("\nThe given number is not a prime number");
    else
        printf("\nThe given number is a prime number");
}