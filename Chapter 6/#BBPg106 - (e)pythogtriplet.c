#include<stdio.h>
int main()
{
    printf("\nThe Pythagoras Triplets upto side less than 30");
    for(int i=1;i<=30;i++)
    {
        for(int j=1;j<=30;j++)
        {
            for(int k=1;k<=30;k++)
            {
                if(i*i + j*j == k*k)
                {
                    printf("\n%d\t%d\t%d",i,j,k);
                }
            }
        }
    }
}