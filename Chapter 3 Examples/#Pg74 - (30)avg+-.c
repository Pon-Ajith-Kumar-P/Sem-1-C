#include<stdio.h>
int main()
{
    float num,possum=0,negsum=0;
    float posavg,negavg;
    int count=0,pos=0,neg=0;
    printf("\nEnter any number (Press -1 to STOP) : ");
    scanf("%f",&num);
    while(num!=-1)
    {
        count++;
        if(num>=0)
        {
            pos++;
            possum+=num;    
        }
        else
        {
            neg++;
            negsum+=num;
        }
        printf("\nEnter any number  (Press -1 to STOP) : ");
        scanf("%f",&num);
    }
    posavg=possum/pos;
    negavg=negsum/neg;
    printf("\nYou have entered %d numbers.",count);
    printf("\nYou have entered %d positive numbers.",pos);
    printf("\nThe sum of %d positive numbers     = %.2f",pos,possum);
    printf("\nThe average of %d positive numbers = %.2f",pos,posavg);
    printf("\nYou have entered %d negative numbers.",neg);
    printf("\nThe sum of %d negative numbers     = %.2f",neg,negsum);
    printf("\nThe average of %d negative numbers = %.2f",neg,negavg);
    return 0;
}