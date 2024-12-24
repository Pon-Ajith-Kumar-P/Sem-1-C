#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter no. of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements in the array\n");
    for(int i=0;i<n;i++)
    {
        printf("\nElement %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        int pos = i; 
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[pos])
                pos=j;
        }
        int temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
    printf("\nSelection Sort Executed Successfully");
    
    printf("\nDisplaying %d Sorted Elements \n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}