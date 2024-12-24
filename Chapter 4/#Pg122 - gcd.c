#include<stdio.h>
int gcd(int n1,int n2)
{
    if(n1%n2==0)
        return n2;
    else    
        return gcd(n2,n1%n2);
}
int main()
{
    int n1,n2;
    printf("\nEnter number 1 : ");
    scanf("%d",&n1);
    printf("\nEnter number 2 : ");
    scanf("%d",&n2);
    if(n2>n1)
    {
        int temp=n1;
        n2=n1;
        n1=temp;
    }
    printf("\nThe GCD of %d and %d is %d",n1,n2,gcd(n1,n2));
}