#include<stdio.h>
int calsum(int a,int b,int c)
{
    return a+b+c;
}
int main()
{
    int x,y,z;
    printf("\nEnter Number 1 : ");
    scanf("%d",&x);
    printf("\nEnter Number 2 : ");
    scanf("%d",&y);
    printf("\nEnter Number 3 : ");
    scanf("%d",&z);
    printf("\nSum = %d",calsum(x,y,z));
}
