#include <stdio.h>
void main() 
{
    char gender;
    int y,qual;
    int s;
    printf("\nWelcome.\nAre you male or female? (M/F)-> ");
    scanf("%c",&gender);
    printf("\nEnter your years of service -> ");
    scanf("%d",&y);
    printf("\nEnter your Qualification (0=PG & 1=G) -> ");
    scanf("%d",&qual);
    if(gender=='M')
    {
        if(y>=10 && qual==0)
            s=11000;
        else if(y>=10 && qual==1)
            s=10000;
        else if(y<10 && qual==0)
            s=10000;
        else if(y<10 && qual==1)
            s=7000;
    }
    else
    {
        if(y>=10 && qual==0)
            s=12000;
        else if(y>=10 && qual==1)
            s=9000;
        else if(y<10 && qual==0)
            s=10000;
        else if(y<10 && qual==1)
            s=6000;
    }
    printf("\nThe Salary = %d",s);
}

