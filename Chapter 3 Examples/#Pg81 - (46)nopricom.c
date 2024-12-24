#include<stdio.h>
int main()
{
    int num,isprime,count=0,prime=0,compo=0;
    printf("\nYou can enter any numbers.\nIf you enter -1 then termination occurs.");
    printf("\nEnter any number (Press -1 to STOP) : ");
    scanf("%d",&num);
    while(num!=-1)
    {
        count++;
        isprime=1;
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                isprime = 0;
                break;
            }
        }
        if(isprime==1)
            ++prime;
        else
            ++compo;    
        printf("\nEnter any number (Press -1 to STOP) : ");
        scanf("%d",&num);
    }
    printf("\nYou have entered %d numbers. ",count);
    printf("\nTotal number of prime numbers = %d ",prime);
    printf("\nTotal number of composite numbers = %d ",compo);
    return 0;
}