#include<stdio.h>
int main()
{
    int r,c;
    printf("\nEnter the rows of the matrices : ");
    scanf("%d",&r);
    printf("\nEnter the cols of the matrices : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("\nEnter the element of matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nEnter element %d%d : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int trans[c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            trans[j][i] = arr[i][j];
        }
    }


    printf("\nDisplaying the Normal Matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }    


    printf("\nDisplaying the Transpose Matrix\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }    


}