#include<stdio.h>
#include<stdlib.h>
void readarr(int n,int arr[n])
{
    printf("\nEnter %d Elements\n",n);
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d : ",i);
        scanf("%d",&arr[i]);
    }
}
void disparr(int n,int arr[n])
{
    printf("\nDisplaying %d Elements\n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
int main()
{
    int n;
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);
    int *arr = malloc(n*sizeof(int));
    readarr(n,arr);
    disparr(n,arr);

}