#include<stdio.h>
void main()
{
    int n;
    int r,temp,sum=0;
    printf("\nEnter a number to find sum of digits : ");
    scanf("%d",&n);
    temp=n;
      while(n>0)
      {
        r=n%10;
        sum=sum+r;
        n=n/10;
       }
    printf("The sum of the digitd of %d = %d",temp,sum);       
}