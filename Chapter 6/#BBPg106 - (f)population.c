#include<stdio.h>
int main()
{
    int n=100000;
    for(int i=1;i<=10;i++)
    {
        n = 1.1 * n;
        printf("\nEnd of Year %d\n",i);
        printf("\nPopulation = %d",n);
    }
    return 0;
}