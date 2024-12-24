#include<stdio.h>
int main()
{
    int r1,r2,c1,c2;
    printf("\nEnter the rows of the matrix 1 : ");
    scanf("%d",&r1);
    printf("\nEnter the cols of the matrix 1 : ");
    scanf("%d",&c1);
    int arr1[r1][c1];
    printf("\nEnter the element of matrix 1\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("\nEnter element %d%d : ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("\nEnter the rows of the matrix 2 : ");
    scanf("%d",&r2);
    printf("\nEnter the cols of the matrix 2 : ");
    scanf("%d",&c2);
    int arr2[r2][c2];
    printf("\nEnter the element of matrix 2\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("\nEnter element %d%d : ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    if(c1!=r2)
    {
        printf("\nThe multiplication of matrix is not possible for this order");
        return 0;
    }

    int mul[r1][c2];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                mul[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }

    printf("\nDisplaying the Added Matrix\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }    
    return 0;

}