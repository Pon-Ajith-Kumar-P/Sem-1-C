#include<stdio.h>
void multiply(int n,int r)
{
    for(int i=1;i<=r;i++)
    {
        printf("\n%02d * %02d = %02d",i,n,i*n);
    }
}
int main()
{
    int n,r;
    printf("\nEnter the multiplication table : ");
    scanf("%d",&n);
    printf("\nEnter the number of rows : ");
    scanf("%d",&r);
    printf("\nThe Multiplication Table : ");
    multiply(n,r);
}