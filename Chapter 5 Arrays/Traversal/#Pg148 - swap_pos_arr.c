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

    printf("\nArray elements before interchanging the values\n");
    for(int i=0;i<N;i++)
    {
        printf("%d\t",arr[i]);
    }

    int max_pos=0;
    int max=arr[0];
    int min_pos=0;
    int min=arr[0];
    for(int i=1;i<N;i++)
    {
        if(arr[i]<min)
        {
            min= arr[i];
            min_pos=i;
        }    
        if(arr[i]>max)
        {
            max=arr[i];
            max_pos=i;
        }
    }
    int temp=arr[max_pos];
    arr[max_pos]=arr[min_pos];
    arr[min_pos]=temp;
    printf("\nThe smallest value in the array = %d",min);
    printf("\nThe largest value in the array = %d",max);
    printf("\nArray elements after interchanging the values\n");
    for(int i=0;i<N;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}