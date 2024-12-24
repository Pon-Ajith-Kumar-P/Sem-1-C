#include<stdio.h>
void primefact(int n)
{
    int i,j,isPrime;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isPrime=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    isPrime=1;
                }
            }
            if(isPrime==0)
            {
                printf("\n%d",i);
            }
        }
    }
}
int main()
{
    int x;
    printf("\nEnter a number : ");
    scanf("%d",&x);
    printf("The Prime Factors are:");
    primefact(x);
}