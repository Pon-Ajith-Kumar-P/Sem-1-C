#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("\nEnter a decimal number: ");
    scanf("%d",&n);
    int temp,rem,i=0,bin=0;
    temp=n;
    while(n>0)
    {
        rem = n % 2;
        bin = bin + ( rem * pow(10,i) );
        n = n / 2;
        i++;
    }
    printf("The binary value of the decimal number %d = %d ",temp,bin);
    return 0;
}