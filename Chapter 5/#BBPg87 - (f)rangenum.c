#include<stdio.h>
int main()
{
    int n,num;
    printf("\nEnter how many numbers you are going to enter: ");
    scanf("%d",&n);
    int i=2;
    printf("\nEnter Number 1 : ",i);
    scanf("%d",&num);
    int big = num, small = num;
    while(i<=n)
    {
        printf("\nEnter Number %d : ",i);
        scanf("%d",&num);
        big=(num>big)?num:big;
        small=(num<small)?num:small;
        i++;
    }
    printf("\nThe largest number among %d numbers  = %d",n,big);
    printf("\nThe smallest number among %d numbers = %d",n,small);
    printf("\nThe range value                     = %d",big-small);
    return 0;
}