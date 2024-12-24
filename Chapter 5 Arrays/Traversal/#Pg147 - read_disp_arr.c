//Example for traversal of array
#include<stdio.h>
int main()
{
    int arr[10];
    printf("\nEnter 10 elements \n");
    for(int i=0;i<10;i++)
    {
        printf("\nElement %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nDisplaying 10 elements \n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}