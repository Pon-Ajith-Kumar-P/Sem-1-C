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

    int val;
    printf("\nEnter the value to be searched : ");
    scanf("%d",&val);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            flag=1;
            pos=i;
            printf("\nThe value %d found in the position %d",val,pos);
        }
    }
    if(flag==0)
        printf("\nThe searched value is not found in the array");
    return 0;

}