#include<stdio.h>
int lambda(int n)
{
    if(n==1)
        return 0;
    if(n<=0)
        return -1;
    return ( lambda(n/2) + 1 );
}
int main()
{
    int n;
    printf("\nEnter n : ");
    scanf("%d",&n);
    printf("\nLambda(%d) = %d",n,lambda(n));

}