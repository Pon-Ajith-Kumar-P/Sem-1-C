#include<stdio.h>
int main()
{
    int i,j,k,n,l;
    printf("Inverted Full Pyramid");
    printf("\nEnter the number of rows you want: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
            printf("  ");
        for(k=i;k<=2*i-1;k++)
            printf("%d ",k);
        for(l=2*(i-1);l>=i;l--)
            printf("%d ",l);
        printf("\n");
    }
    return 0;
}