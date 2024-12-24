#include <stdio.h>
void main() 
{
    float n1,n2,n3,n4,n5,avg;
    printf("Enter your mark 1 : ");
    scanf("%f",&n1);
    printf("Enter your mark 2 : ");
    scanf("%f",&n2);
    printf("Enter your mark 3 : ");
    scanf("%f",&n3);
    printf("Enter your mark 4 : ");
    scanf("%f",&n4);
    printf("Enter your mark 5 : ");
    scanf("%f",&n5);
    avg=(n1+n2+n3+n4+n5)/5;
    printf("Your Average Mark = %f",avg);    
    if(avg>=60 && avg<=100)
    {
        printf("\nFirst Division");
    }
    else if(avg>=50 && avg<60)
    {
        printf("\nSecond Division");
    }
    else if(avg>=40 && avg<50)
    {
        printf("\nThird Division");
    }
    else
    {
        printf("\nFail.");
    }
}