#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter a Number: ");
    scanf("%d",&a);
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            printf("\nIt is a not a prime number");
            break;
        }   
    }
    if(i==a)
        printf("\nIt is a prime number");
    return 0;
}