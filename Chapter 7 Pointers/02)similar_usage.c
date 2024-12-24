#include<stdio.h>
int main(void)
{
    int x=10,y=25;
    int *pnum=&x;
    printf("\nThe value of x using pointer = %d",*pnum);

    pnum=&y;
    printf("\nThe value of y using pointer = %d",*pnum);

}