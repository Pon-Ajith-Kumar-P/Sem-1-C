#include<stdio.h>
int fact(int x)
{
    if(x==0 || x==1)
        return 1;
    return x*fact(x-1);
}
int main()
{
    float i;
    float sum = 0;
    for(i=1;i<=7;i++)
    {
        sum = sum + i/fact(i);
    }
    printf("\nThe sum of series = %.2f",sum);
    return 0;
}