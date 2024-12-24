#include<stdio.h>
#include<math.h>
int main()
{
    float x;
    int n=7;
    printf("\nEnter the value of x = ");
    scanf("%f",&x);
    float sum=(x-1)/x;
    float term = (x-1)/x;
    for(int i=2;i<=n;i++)
    {
        sum = sum + 0.5*pow(term,i);
    }
    printf("\nThe Logarithmic Sum = %.4f",sum);
    printf("\nThe Logarithmic Sum = %.4f",log10(x));
}
