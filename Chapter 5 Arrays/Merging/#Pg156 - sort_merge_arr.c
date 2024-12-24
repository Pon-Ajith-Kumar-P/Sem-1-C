#include<stdio.h>
#include<stdlib.h>
#define N 25
int main()
{
    int arr1[N],arr2[N];
    int n1,n2;
    printf("\nEnter number of elements in array 1 : ");
    scanf("%d",&n1);
    printf("\nEnter number of elements in array 2 : ");
    scanf("%d",&n2);
    
    printf("\nEnter %d elements in array 1\n ",n1);
    for(int i=0;i<n1;i++)
    {
        printf("\nElement %d : ",i+1);
        scanf("%d",&arr1[i]);
    }

    printf("\nEnter %d elements in array 2\n ",n2);
    for(int i=0;i<n2;i++)
    {
        printf("\nElement %d : ",i+1);
        scanf("%d",&arr2[i]);
    }

    int *merge = malloc((n1+n2)*sizeof(int));
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
            if(arr1[i]>arr2[j])
                merge[k++]=arr2[j++];
            else
                merge[k++]=arr1[i++];
    }
    while(i<n1)
    {
        merge[k++]=arr1[i++];
    }
    while(j<n2)
    {
        merge[k++]=arr2[j++];
    }

    printf("\nDisplaying %d Elements \n",n1+n2);
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d\t",merge[i]);
    }
    return 0;
}