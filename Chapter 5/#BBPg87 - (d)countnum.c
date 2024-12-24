#include<stdio.h>
int main()
{
    int num,pos=0,neg=0,zero=0;
    printf("\nEnter any number (Press -1 to stop) : ");
    scanf("%d",&num);
    while(num!=-1)
    {
        if(num>0)
            pos++;
        else if(num<0)
            neg++;
        else    
            zero++;
        printf("\nEnter any number (Press -1 to stop) : ");
        scanf("%d",&num);
    }
    printf("\nNumber of positive numbers = %d",pos);
    printf("\nNumber of negative numbers = %d",neg);
    printf("\nNumber of zeroes           = %d",zero);
    return 0;
}