#include<stdio.h>
int main()
{
    void *gp;
    float num=10;
    gp=&num;
    printf("The value is %f after type casting",*(float*)gp);
}