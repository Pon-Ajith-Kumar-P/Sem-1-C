#include<stdio.h>
int main()
{
    printf("\nCombinations of 1,2,3:\n");
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            for(int k=1;k<=3;k++)
            {
                printf("\n%d %d %d",i,j,k);
            }
        }
    }
}