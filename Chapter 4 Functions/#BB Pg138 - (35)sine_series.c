#include<stdio.h>
#include<math.h>
int fact(int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}
float series(float x, int n)
{
    int p,sign=1;
    float term, sum = 0.0;
    for(int i=1;i<=n;i++)
    {
        p=2*i-1;
        term = pow(x,p)/fact(p);
        sum += sign*term;
        sign = -sign;
    }
    return sum;
}
int main()
{
    float x; int n;
    printf("\nEnter x : ");
    scanf("%f",&x);
    printf("\nEnter n : ");
    scanf("%d",&n);
    printf("\nSeries(%.2f)=%.2f",x,series(x,n));
}