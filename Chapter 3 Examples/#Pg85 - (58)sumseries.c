#include<stdio.h>
int main()
{
    int n;
    float i,term,sum=0;
    printf("\nEnter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        term = i/(i+1);
        sum = sum + term;
    }
    printf("\nThe sum of the series = %.3f",sum);
}