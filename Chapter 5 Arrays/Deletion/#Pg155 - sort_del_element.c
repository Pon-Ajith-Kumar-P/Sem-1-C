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
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("\nDisplaying %d Elements in sorted manner\n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    int val;
    printf("\nEnter the number to be deleted : ");
    scanf("%d",&val);

    for(int i=0;i<n;i++)
    {
        if(arr[i]>val)
        {
            for(int j=i;j<n;j++)
            {
                arr[j]=arr[j+1];
            }            
        }
    }

    n--;

    printf("\nDisplaying %d Elements \n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}