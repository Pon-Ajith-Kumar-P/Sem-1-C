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
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    printf("\nDisplaying %d Elements in sorted form \n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    int val, flag = 0;
    printf("\n\nEnter the value to be inserted : ");
    scanf("%d",&val);

    for(int i=0;i<n;i++)
    {
        if(arr[i]>val)
        {
            flag = 1;
            for(int j=n-1;j>=i;j--)
            {
                arr[j+1]=arr[j];
            }
            arr[i]=val;
            break;
        }
    }
    if(flag==0)
    {
        arr[n]=val;
    }
    n++;

    printf("\nDisplaying %d Elements \n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}