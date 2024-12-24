#include<stdio.h>
#define N 10
int main()
{
    int arr[N]={1,2,3,4};
    printf("\nEnter %d elements \n",N);
    //If all the 10 values are not given then the other values are initialized as 0
    for(int i=0;i<N;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}