#include<stdio.h>
void main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("\nEnter integer %d: ",i+1);
        scanf("%d",&arr[i]);
    }    
    printf("%d,%d,%d\n",arr[0],arr[1],arr[2]);
    printf("%d,%d,%d\n",arr[3],arr[4],arr[5]);
    printf("%d,%d,%d\n",arr[6],arr[7],arr[8]);
    printf("%d",arr[9]);
    int arr1[10];
    for(int j=0;j<10;j++)
    {
        printf("\nEnter integer %d: ",j+1);
        scanf("%d",&arr1[j]);
    }
    for(int j=0;j<10;j++)
    {
        printf("%d",arr1[j]);
        if(j%3==2)
            printf("\n");
        else if(j==9)
            printf(" ");
        else
            printf(", ");    
    }
}