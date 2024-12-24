#include<stdio.h>
int main()
{
    float num,sum=0,avg;
    int count=0;
    printf("\nEnter any number (Press 0 to STOP) : ");
    scanf("%f",&num);
    while(num!=0)
    {
        count++;
        sum+=num;
        printf("\nEnter any number  (Press 0 to STOP) : ");
        scanf("%f",&num);
    }
    avg=sum/count;
    printf("\nYou have entered %d numbers.",count);
    printf("\nThe sum of %d numbers     = %.2f",count,sum);
    printf("\nThe average of %d numbers = %.2f",count,avg);
    return 0;
}