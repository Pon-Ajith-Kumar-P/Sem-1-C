#include<stdio.h>

float sum(float x, float y) 
{
    return x + y;
}

int main() 
{
    float x, y;
    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter y: ");
    scanf("%f", &y);
    printf("The sum of %.2f and %.2f = %.2f", x, y, sum(x, y));    
    return 0;
}
