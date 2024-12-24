#include<stdio.h>
int main(void)
{
    int x=10;
    int *pnum=&x;
    printf("\nThe value of x = %d",x);
    printf("\nThe address of x = %p",&x);

    printf("\nThe value of x using pointer = %d",*pnum);
    printf("\nIncrementing the pointer");
    printf("\n%d",*pnum = *pnum +1);

}