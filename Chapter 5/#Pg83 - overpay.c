#include<stdio.h>
int main()
{
    int hour;
    float overpay;
    for(int i=1;i<=10;i++)
    {
        printf("\nEmployee %d",i);
        printf("\nNo. of hours worked = ");
        scanf("%d",&hour);
        if(hour<40)
            printf("\nYou have no overpay.\n");
        else
        {
            overpay = 120 * (hour-40);
            printf("\nYour overpay amount = Rs. %f\n",overpay);
        }

    }
    return 0;
}