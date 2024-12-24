#include<stdio.h>
int main()
{
    printf("\nPrime Numbers between 1 to 300");
    for(int i=1;i<=300;i++)
    {
        int j=2;
        for(;j<i;j++)
        {
            if(i%j==0)
                break;    
        }
        if(j==i)
            printf("\n%d",i);
    }

    return 0;
}