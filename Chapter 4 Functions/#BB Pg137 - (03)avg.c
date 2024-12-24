#include<stdio.h>
#define N 25
float avg(int n,int arr[n])
{
    float sum=0.0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum/n;
}
int main()
{
    int n; int arr[N];
    printf("\nEnter the number of terms : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }   
    printf("\nThe average of %d values = %.2f",n,avg(n,arr));
}