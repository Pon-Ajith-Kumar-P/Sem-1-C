#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("\nEnter an octal number: ");
    scanf("%d",&n);
    int temp,rem,i=0,bin=0;
    temp=n;
    while(n>0)
    {
        rem = n % 10;
        bin = bin + ( rem * pow(8,i) );
        n = n / 10;
        i++;
    }
    printf("The decimal value of the octal number %d = %d ",temp,bin);
    return 0;
}