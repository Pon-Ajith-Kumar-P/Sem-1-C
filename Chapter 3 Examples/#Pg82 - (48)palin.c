#include<stdio.h>
void main()
{
    int n;
    int r,temp,rev=0;
    printf("\nEnter a number to reverse it : ");
    scanf("%d",&n);
    temp=n;
      while(n>0)
      {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
       }
    printf("The reverse of %d = %d",temp,rev);       
}