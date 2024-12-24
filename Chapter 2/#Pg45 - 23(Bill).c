#include<stdio.h>
void main()
{
    float qty,price,total,disc,disc_total,tax,net_total;
    printf("\nTotal no. of item     = ");
    scanf("%f",&qty);
    printf("\nPrice of each item    = ");
    scanf("%f",&price);
    printf("\nDiscount for the item = ");
    scanf("%f",&disc);
    printf("\nTax for each item     = ");
    scanf("%f",&tax);
    total=qty*price;
    disc=(total*disc)/100;
    disc_total=total-disc;
    tax=disc_total*tax/100;
    net_total=disc_total+tax;
    printf("\n-----BILL----");
    printf("\nTotal No. of items   = %.2f",qty);
    printf("\nPrice of each items  = %.2f",price);
    printf("\nTotal Price of items = %.2f",total);
    printf("\nDiscount Amount      = %.2f",disc);
    printf("\nTax Amount           = %.2f",tax);
    printf("\nTotal Amount         = %.2f",net_total);
}