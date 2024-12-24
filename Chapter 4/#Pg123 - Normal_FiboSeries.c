#include<stdio.h>
int main()
{
    int n, t3;
    printf("\nEnter how many terms : ");
    scanf("%d",&n);
    int t1=0;
    int t2=1;
    printf("The fibonacci series is\n%d\t%d",t1,t2);
    for(int i=3;i<=n;i++)
    {
        t3=t1+t2;
        printf("\t%d",t3);
        t1=t2;
        t2=t3;
    }
}