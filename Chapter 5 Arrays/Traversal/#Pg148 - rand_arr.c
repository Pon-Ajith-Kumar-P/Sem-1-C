#include<stdio.h>
#include<stdlib.h>
#define N 5
int main()
{
    int arr[N];
    printf("\nEnter %d elements \n",N);
    for(int i=0;i<N;i++)
    {
        arr[i]=rand()%N;    //rand()%N tells us that it generates the random number between 0 to N-1
        printf("%d\t",arr[i]);
    }
    return 0;
}