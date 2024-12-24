#include <stdio.h>
int main() 
{
    int n;
    printf("\nSample Pattern - 1");
    printf("\nHow many lines do you want ? -> ");
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if((i+j)%2==0)
                printf("%d  ",1);
            if((i+j)%2==1)
                printf("%d  ",0);
        }
        printf("\n");
    }
    return 0;
}