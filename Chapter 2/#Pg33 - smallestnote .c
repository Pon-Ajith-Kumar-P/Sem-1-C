#include<stdio.h>
void main()
{
    int amt,no100,no50,no10,no5,no2,no1,total;
    printf("\nEnter an amount : ");
    scanf("%d",&amt);
    no100=amt/100;
    amt=amt%100;
    no50=amt/50;
    amt=amt%50;
    no10=amt/10;
    amt=amt%10;
    no5=amt/5;
    amt=amt%5;
    no2=amt/2;
    amt=amt%2;
    no1=amt/1;
    amt=amt%1;
    total=no100+no50+no10+no5+no2+no1;
    printf("\nSmallest Number of notes = %d",total);
}