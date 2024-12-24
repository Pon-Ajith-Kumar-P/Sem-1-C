#include<stdio.h>
void swap(int *x,int *y)
{
    printf("\nBefore Swapping : x = %d and y = %d",*x,*y);
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("\nAfter Swapping : x = %d and y = %d",*x,*y);
}
int main()
{
    int a,b;
    printf("\nEnter a : ");
    scanf("%d",&a);
    printf("\nEnter b : ");
    scanf("%d",&b);
    printf("\nBefore Swapping : a = %d and b = %d",a,b);
    swap(&a,&b);
    printf("\nAfter Swapping : a = %d and b = %d",a,b);
    
}