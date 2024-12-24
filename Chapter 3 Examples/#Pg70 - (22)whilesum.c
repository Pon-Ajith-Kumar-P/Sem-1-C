#include<stdio.h>
void main()
{
    int m,n;
    printf("\nEnter the starting number: ");
    scanf("%d",&m);
    printf("\nEnter the ending number: ");
    scanf("%d",&n);
    int sum=0;
    int temp = m;
    while(m<=n)
    {
        sum=sum+m;
        m++;
    }
    printf("\nThe sum of %d to %d = %d",temp,n,sum);
}