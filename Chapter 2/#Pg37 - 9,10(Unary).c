#include<stdio.h>
void main()
{
    int x=3;
    //Using prefix increment
    printf("\nThe value of x = %d",x);
    printf("\nThe value of ++x = %d",++x);
    printf("\nThe value of x after increment = %d",x);
    //Using prefix decrement
    printf("\nThe value of x = %d",x);
    printf("\nThe value of --x = %d",--x);
    printf("\nThe value of x after decrement = %d",x);
    int y=3;
    //Using postfix increment
    printf("\nThe value of y = %d",y);
    printf("\nThe value of y++ = %d",y++);
    printf("\nThe value of y after increment = %d",y);
    //Using postfix decrement
    printf("\nThe value of y = %d",y);
    printf("\nThe value of y-- = %d",y--);
    printf("\nThe value of y after increment = %d",y);
}