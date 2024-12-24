#include<stdio.h>
#define N 3
int main()
{
    float arr[N];
    printf("\nEnter %d elements of sorted float array \n",N);
    for(int i=0;i<N;i++)
    {
        printf("\nElement %d : ",i+1);
        scanf("%f",&arr[i]);
    }

    if(N%2==0)
    {
        printf("\nMedian = %.2f",((arr[N/2-1]+arr[N/2])/2));
    }
    else
    {
        printf("\nMedian = %.2f",(arr[N/2]));
    }
    return 0;
}