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
    printf("\nEnter the value to be inserted : ");
    scanf("%d",&val);
    printf("\nEnter at which position to be inserted : ");
    scanf("%d",&pos);

    for(int j=n-1;j>=pos;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[pos]=val;
    n++;


    printf("\nDisplaying %d Elements \n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}