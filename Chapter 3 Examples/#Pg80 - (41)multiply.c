#include<stdio.h>
int main()
{
    int n,r,i;
    printf("\nEnter Multiplication Table Number : ");
    scanf("%d",&n);
    printf("\nEnter number of rows : ");
    scanf("%d",&r);
    printf("\n---Multiplication Table %d--- ",n);
    for(i=1;i<=r;i++)
        printf("\n%d\t*\t%d\t=\t%d ",i,n,n*i);
    return 0;
}