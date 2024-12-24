#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the order of the matrices : ");
    scanf("%d",&n);
    int arr1[n][n];
    int arr2[n][n];
    printf("\nEnter the element of matrix 1\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("\nEnter element %d%d : ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nEnter the element of matrix 2\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("\nEnter element %d%d : ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    int add[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            add[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("\nDisplaying the Added Matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",add[i][j]);
        }
        printf("\n");
    }    


}