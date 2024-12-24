#include<stdio.h>
#define N 5
int main()
{
    int arr[N];
    printf("\nEnter %d elements \n",N);
    for(int i=0;i<N;i++)
    {
        printf("\nElement %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(arr[i]>arr[j] && i!=j)
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }    
    }
        printf("\nDisplaying %d Elements in sorted order\n",N);
    for(int i=0;i<N;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nThe largest element in the array = %d",arr[N-1]);
    printf("\nThe second largest element in the array = %d",arr[N-2]);
    return 0;
}