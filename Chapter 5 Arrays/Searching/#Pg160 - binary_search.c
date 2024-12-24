#include<stdio.h>
#define N 25
int main()
{
    int arr[N];
    int n,pos=-1;
    printf("\nEnter number of elements in array : ");
    scanf("%d",&n);
    printf("\nEnter %d elements \n",n);
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

    int val,mid,beg=0,end=n;
    printf("\nEnter the value to be searched : ");
    scanf("%d",&val);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        mid=(beg+end)/2;
        if(arr[mid]==val)
        {
            pos=mid;
            flag=1;
        }
        else if(arr[mid]>val)
            end = mid-1;
        else
            beg = mid+1;
    }
    if(flag==1)
            printf("\nThe value %d found in the position %d",val,pos);
    if(flag==0)
        printf("\nThe searched value is not found in the array");
    return 0;
}