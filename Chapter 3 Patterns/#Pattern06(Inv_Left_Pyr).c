#include <stdio.h>
int main() 
{
    int n,i,j,k;
    printf("Inverted Left Half Pyramid");
    printf("\nEnter the number of lines : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(k=1;k<=n-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}