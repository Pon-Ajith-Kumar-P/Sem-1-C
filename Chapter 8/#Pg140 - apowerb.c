#include<stdio.h>
int power(int a,int b)
{
    if(b==0)
        return 1;
    return a*power(a,b-1);
}
int main()
{
    int x,y;
    printf("\nEnter the Base     : ");
    scanf("%d",&x);
    printf("\nEnter the Exponent : ");
    scanf("%d",&y);
    printf("\nPower = %d",power(x,y));
}
