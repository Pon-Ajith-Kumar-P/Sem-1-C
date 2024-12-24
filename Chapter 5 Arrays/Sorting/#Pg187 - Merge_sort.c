#include<stdio.h>
int main()
{
    int n1;
    printf("\nEnter no. of elements in array 1 : ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("\nEnter the elements in the array\n");
    for(int i=0;i<n1;i++)
    {
        printf("\nElement %d : ",i+1);
        scanf("%d",&arr1[i]);
    }

    int n2;
    printf("\nEnter no. of elements in array 2 : ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("\nEnter the elements in the array\n");
    for(int i=0;i<n2;i++)
    {
        printf("\nElement %d : ",i+1);
        scanf("%d",&arr2[i]);
    }

    int arr3[n1+n2];
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]>arr2[j])
            arr3[k++]=arr2[j++];
        else
            arr3[k++]=arr1[i++];
    }
    while(i<n1)
    {
        arr3[k++]=arr1[i++];
    }while(j<n2)
    {
        arr3[k++]=arr2[j++];
    }

    printf("\nMerge Sorted Successfully");
    
    printf("\nDisplaying %d Sorted Elements \n",n1+n2);
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d\t",arr3[i]);
    }

    return 0;
}