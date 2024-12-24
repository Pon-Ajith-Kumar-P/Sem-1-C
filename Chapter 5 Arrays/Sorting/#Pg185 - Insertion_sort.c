#include<stdio.h>
void readarray(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        printf("\nElement %d : ",i+1);
        scanf("%d",&arr[i]);
    }
}
void disparray(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void insertion(int n,int arr[])
{
    int j,key;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int n;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d elements\n",n);
    readarray(n,arr);
    insertion(n,arr);
    printf("\nDisplaying %d elements in sorted order\n",n);
    disparray(n,arr);
    return 0; 
}