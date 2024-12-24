#include<stdio.h>
int main()
{
    int n,x;
    printf("\nEnter the base of the number : ");
    scanf("%d",&x);
    printf("\nEnter the exponent of the number : ");
    scanf("%d",&n);
    int pow=1;
    for(int i=1;i<=n;i++)
    {
        pow=pow*x;
    }   
    printf("\n%d to the power of %d = %d ",x,n,pow);
    return 0;
}