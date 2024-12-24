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

    int val,pos;
    printf("\nEnter at which position to be deleted : ");
    scanf("%d",&pos);

    for(int i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;

    printf("\nDisplaying %d Elements \n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}