#include<stdio.h>
int rec_rev(int n,int rev)
{
    if(n==0)
        return rev;
    rev = (rev*10)+(n%10);
    return rec_rev(n/10,rev);
}
int main()
{
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    printf("\nThe reverse of the number = %d",rec_rev(n,0));
}