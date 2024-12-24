#include<stdio.h>
#include<string.h>
void main()
{
    int n;
    float sum=0;
    printf("\nNo. of items purchased = ");
    scanf("%d",&n);
    char item[n][20];
    float qty[n],amt[n],total[n];
    for(int i=0;i<n;i++)
    {
        printf("\n\nEnter the ItemName %d = ",i+1);
        scanf("%s",&item[i]);
        printf("\nEnter its quantity = ");
        scanf("%f",&qty[i]);
        printf("\nEnter its amount = ");
        scanf("%f",&amt[i]);
    }
    for(int i=0;i<n;i++)
    {
        total[i]=qty[i]*amt[i];
        sum=sum+total[i];
    }
    printf("\n---------------*BILL*---------------");
    printf("\nItem\t\tQuantity\t\tPrice\t\tAmount");
    for(int i=0;i<n;i++)
    {
        printf("\n%-16s%-24.2f%-16.2f%7.2f",item[i],qty[i],amt[i],total[i]);
    }
    printf("\n------------------------------------------------");
    printf("\nTotal amount to be paid = Rs. %.2f",sum);
    printf("\n------------------------------------------------");
}