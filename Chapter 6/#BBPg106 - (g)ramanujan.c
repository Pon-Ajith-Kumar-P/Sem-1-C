#include<stdio.h>
#include<math.h>
int main( )
{
    for(int i=1;i<=30;i++)
    {
        for(int j=1;j<=30;j++)
        {
            for(int k=1;k<=30;k++)
            {
                for(int l=1;l<=30;l++)
                {
                    if((i!=j && i!=k && i!=l) && (j!=i && j!=k && j!=l) &&(k!=i && k!=j && k!=l) &&(l!=i && l!=j && l!=k))
                    {
                        if(i*i*i + j*j*j == k*k*k + l*l*l)
                        {
                             printf("\n%d\t%d\t%d\t%d",i,j,k,l);
                        }   
                    }
                }
            }
        }
    }
    return 0 ;
}