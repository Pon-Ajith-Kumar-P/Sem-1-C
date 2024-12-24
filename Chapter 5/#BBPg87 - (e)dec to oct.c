#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,oct=0;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    int ntemp=n;
    int i=0;
    while(n>0)
    {
        rem=n%8;
        oct=oct+rem*pow(10,i);
        n=n/8;
        i++;
    }
    printf("\nThe octal equivalent number = %d",oct);
    printf("\nThe octal equivalent number = %o",ntemp);
    return 0;
}