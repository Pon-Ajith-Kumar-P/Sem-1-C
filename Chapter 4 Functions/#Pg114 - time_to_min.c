#include<stdio.h>
int time_conv(int hr,int min)
{
    return (hr*60+min);
}
int main()
{
    int hr,min;
    printf("\nEnter the time in 24hrs format (hr:min) : ");
    scanf("%d:%d",&hr,&min);
    printf("\nTotal No. of Minutes = %d",time_conv(hr,min));
}
