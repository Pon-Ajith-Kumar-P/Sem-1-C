#include <stdio.h>
int main() 
{
    int n,i,j;
    printf("\nEnter the number of lines : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c  ",65 + j);
        }
        printf("\n");
    }
    return 0;
}