#include<stdio.h>
int main()
{
    float i,tax;
    printf("\nEnter your income: Rs. ");
    scanf("%f",&i);
    if(i<150000)
    {
        printf("\nYou have no tax");
        tax=0;
    }
    else if(i>=150001 && i<=300000)
    {
        tax=0.1*i;
    }
    else if(i>=300001 && i<=500000)
    {
        tax=0.2*i;
    }
    else
    {
        tax=0.3*i;
    }
    printf("\nYour tax amount = %.2f",tax);
    return 0;
}