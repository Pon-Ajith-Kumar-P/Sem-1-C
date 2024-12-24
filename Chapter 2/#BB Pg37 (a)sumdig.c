#include<stdio.h>
void main()
{
    int n;
    int q,r,temp,sum=0;
    printf("\nEnter a 5 digit number : ");
    scanf("%d",&n);
    temp=n;
    if((n>=10000)&&(n<=99999))
    {
      while(n>0)
      {
        q=n/10;
        r=n%10;
        sum=sum+r;
        n=q;
       }
    printf("The sum of the digits in %d = %d",temp,sum);
    }
    else
    {
        printf("\nEnter a valid 5 digit number.");
    }    
}