#include<stdio.h>
int main()
{
    int arr[5] = {40,2,90,2,1};
    int max=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    int smax=0;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]!=max)
        {
            if(arr[i]>smax)
                smax=arr[i];
        }
    }
    printf("\nLargest : %d | Second largest : %d",max,smax);
}