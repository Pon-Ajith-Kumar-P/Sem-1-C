#include<stdio.h>
int main()
{
    int a,b,c,big;
    printf("\nEnter Number 1: ");
    scanf("%d",&a);
    printf("\nEnter Number 2: ");
    scanf("%d",&b);
    printf("\nEnter Number 3: ");
    scanf("%d",&c);
    if(a>b && a>c)
        big=a;
    else if(b>c)
        big=b;
    else
        big=c;
    printf("\nThe largest number = %d",big);
    return 0;
}