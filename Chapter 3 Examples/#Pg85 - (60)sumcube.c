#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float i,term,sum=0;
    printf("\nEnter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        term = pow(i,3);
        sum = sum + term;
    }
    printf("\nThe sum of cube of first %d natural numbers = %.3f",n,sum);
}