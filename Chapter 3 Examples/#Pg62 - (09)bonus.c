#include<stdio.h>
int main()
{
    float s;
    char g;
    printf("\nEnter your salary: ");
    scanf("%f",&s);
    float i=s;
    printf("\nEnter your gender (m or f): ");
    scanf(" %c",&g);
    if(g=='m')
        s=(s>10000)?(s*1.07):(s*1.05);
    else if(g=='f')
        s=(s>10000)?(s*1.12):(s*1.10);
    printf("\nYour Bonus = Rs. %.2f",s-i);
    printf("\nYour Salary = Rs. %.2f",s);
    return 0;
}