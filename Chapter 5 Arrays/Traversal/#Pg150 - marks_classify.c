#include<stdio.h>
#define N 10
int main()
{
    int marks[N];
    printf("\nEnter %d Marks \n",N);
    int group[11]={0};
    for(int i=0;i<N;i++)
    {
        printf("\nMark %d : ",i+1);
        scanf("%d",&marks[i]);
        ++group[(int) (marks[i])/10];
    }
    printf("\nDisplaying the results\n");
    printf("Range\t|\tNo. of students\n");
    for(int i=0;i<N+1;i++)
    {
        if(i!=N)
            printf("%0d - %0d\t|\t %d\n",i*10,i*10+9,group[i]);
        else
            printf("%0d\t|\t%d\n",i*10,group[i]);
    }
    printf("\nDisplaying the Histogram View of results\n");
    printf("Range\t| No. of students\n");
    for(int i=0;i<N+1;i++)
    {
        if(i!=N)
        {
            printf("%0d - %0d\t|",i*10,i*10+9);
            for(int j=1;j<=group[i];j++)
                printf(" * ");
            printf("\n");
        }
        else
        {
            printf("%0d\t|",i*10);
            for(int j=1;j<=group[i];j++)
                printf(" * ");
            printf("\n");
        }
    }

    return 0;
}