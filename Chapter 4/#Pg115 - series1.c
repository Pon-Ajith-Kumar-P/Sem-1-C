#include<stdio.h>
float fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    printf("\nEnter the number of terms : ");
    scanf("%d",&n);
    float term,sum = 0.0;
    for(int i=1;i<=n;i++)
    {
        term = 1/fact(i);
        sum += term;
    }
    printf("\nThe sum of the series = %.2f",sum);
}
//Remember the typecasting concept while executing the code
