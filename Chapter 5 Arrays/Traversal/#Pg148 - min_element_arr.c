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
    int min=arr[0];
    for(int i=1;i<N;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("\nThe smallest element in the array = %d",min);
    return 0;
}