#include<stdio.h>
void main()
{
    int n;
    int q,r,temp,rev=0;
    printf("\nEnter a 5 digit number to reverse it : ");
    scanf("%d",&n);
    temp=n;
    if((n>=10000)&&(n<=99999))
    {
      while(n>0)
      {
        q=n/10;
        r=n%10;
        rev=(rev*10)+r;
        n=q;
       }
    printf("The reverse of %d = %d",temp,rev);
    }
    else
    {
        printf("\nEnter a valid 5 digit number.");
    }    
}