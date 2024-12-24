#include<stdio.h>
void main()
{
    int count = 0,sum=0;
    for(int i=2;i<=200;i+=2)
    {
        ++count;
        sum=sum+i;
    }
    printf("\nThe total even numbers between 1 to 200 = %d",count);
    printf("\nThe sum of even numbers between 1 to 200 = %d",sum);
}