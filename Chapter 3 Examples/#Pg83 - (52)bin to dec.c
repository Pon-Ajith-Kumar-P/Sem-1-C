#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("\nEnter a binary number: ");
    scanf("%d",&n);
    int temp,rem,i=0,dec=0;
    temp=n;
    while(n>0)
    {
        rem = n % 10;
        dec = dec + ( rem * pow(2,i) );
        n = n / 10;
        i++;
    }
    printf("The decimal value of the binary number %d = %d ",temp,dec);
    return 0;
}                                                                 