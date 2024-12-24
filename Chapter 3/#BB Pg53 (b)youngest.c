#include<stdio.h>
void main( )
{
    int ram,shyam,ajay;
    printf("\nEnter the age of Ram : ");
    scanf("%d",&ram);
    printf("\nEnter the age of Shyam : ");
    scanf("%d",&shyam);    
    printf("\nEnter the age of Ajay : ");
    scanf("%d",&ajay);
    int young;
	if((ram==shyam)&&(ram==ajay)&&(shyam==ajay))
    {
        printf("\nRam, Shyam and Ajay are of same age.");
    }
    else if((ram<shyam)&&(ram<ajay))
    {
        printf("\nRam is the youngest person.");
    }
    else if((shyam<ram)&&(shyam<ajay))
    {
        printf("\nShyam is the youngest person.");
    }
    else
    {
        printf("\nAjay is the youngest person.");
    }
}