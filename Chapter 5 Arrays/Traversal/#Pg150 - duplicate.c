#include<stdio.h>
#define N 10
int main()
{
    int arr[N];
    printf("\nEnter %d elements \n",N);
    for(int i=0;i<N;i++)
    {
        printf("\nElement %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                printf("\nThe given array contains duplicate element at %d and %d",i,j);
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("\nThe given has no duplicate elements");
    }
    return 0;
}