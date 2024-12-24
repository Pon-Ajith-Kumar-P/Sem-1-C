#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float i,term,sum=0;
    printf("\nEnter upto which even numbers do you want to find sum of square? -> ");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2)
    {
        term = pow(i,2);
        sum = sum + term;
    }
    printf("\nThe sum of squares of first %d even numbers = %.3f",n,sum);
}