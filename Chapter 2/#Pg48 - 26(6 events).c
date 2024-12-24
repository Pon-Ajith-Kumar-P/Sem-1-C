#include<stdio.h>
void main()
{
    float e1,e2,s,a1,a2,a3;
    printf("\nWelcome\nYou have written 3 exams\nYou have participated in one sports event");
    printf("\nYou have participated in three activities\nEnter your marks out of 100");
    printf("\nEnter your 1st examination mark = ");
    scanf("%f",&e1);
    printf("\nEnter your 2nd examination mark = ");
    scanf("%f",&e2);
    printf("\nEnter your sports event mark    = ");
    scanf("%f",&s);
    printf("\nEnter your 1st activity mark    = ");
    scanf("%f",&a1);
    printf("\nEnter your 2nd activity mark    = ");
    scanf("%f",&a2);
    printf("\nEnter your 3rd activity mark    = ");
    scanf("%f",&a3);
    float exam=0.5*(e1+e2)/2;
    float sport=0.2*s;
    float activity=0.3*(a1+a2+a3)/3;
    float mark = exam + sport + activity;
    printf("\nTotal percentage in exam       : %.2f",exam);
    printf("\nTotal percentage in sports     : %.2f",sport);
    printf("\nTotal percentage in activities : %.2f",activity);
    printf("\nTotal percentage               : %.2f",mark);
}