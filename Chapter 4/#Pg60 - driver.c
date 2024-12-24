#include <stdio.h>
void main() 
{
    int age;
    char gender,martial;
    printf("\nWelcome. \nEnter Your Age here -> ");
    scanf("%d",&age);
    printf("\nAre you Married? (Y/N)-> ");
    scanf(" %c",&martial);
    printf("\nWhat is your Gender? (M/F)-> ");
    scanf(" %c",&gender);
    if(martial=='Y')
    {
        printf("\nYou are insured as a driver.");
    }
    else
    {
        if(age>30 && gender=='M')
        {
            printf("\nYou are insured as a driver");
        }
        else if(age>25 && gender=='F')
        {
            printf("\nYou are insured as a driver");   
        }
        else
        {
            printf("\nYou are not insured as a driver");
        }
    }
}
