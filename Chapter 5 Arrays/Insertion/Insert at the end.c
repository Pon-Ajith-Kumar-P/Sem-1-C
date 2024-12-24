#include<stdio.h>
#define N 25
int main()
{
    int n;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);
    int arr[N];
    printf("\nEnter %d elements\n",n);
    for(int i=0;i<n;i++)
    {
        printf("\nElement %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    
    printf("\nDisplaying %d Elements \n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    int val;
    printf("\nEnter the value to be inserted : ");
    scanf("%d",&val);
    
    arr[n]=val;
    n++;

    printf("\nDisplaying %d Elements \n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}