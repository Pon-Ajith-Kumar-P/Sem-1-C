#include<stdio.h>
int main()
{
    float cp,sp;
    printf("\nEnter the cost price: Rs. ");
    scanf("%f",&cp);
    printf("\nEnter the selling price: Rs. ");
    scanf("%f",&sp);
    if(sp>cp)
        printf("\nYou have got a profit.\nYour Profit = Rs. %.2f",sp-cp);
    else if(cp>sp)
        printf("\nYou have got a loss.\nYour Loss = Rs. %.2f",cp-sp);
    else
        printf("\nYou have no profit and no loss.");
    return 0;
}