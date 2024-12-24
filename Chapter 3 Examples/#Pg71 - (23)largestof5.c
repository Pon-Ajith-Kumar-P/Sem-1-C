#include<stdio.h>
int main()
{
    int i=1,num,large=-32768;
    while(i<=5)
    {
        printf("\nEnter Number %d : ",i);
        scanf("%d",&num);
        large=(num>large)?num:large;
        i++;
    }
    printf("\nThe largest of five numbers = %d",large);
    return 0;
}