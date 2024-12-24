#include<stdio.h>
int time(int hr, int min)
{
    return (hr * 60 + min);
}
int main()
{
    int hr,min;
    printf("\nEnter the time (hh:min) = ");
    scanf("%d:%d",&hr,&min);
    printf("The converted time into minutes = %d minutes",time(hr,min));

}