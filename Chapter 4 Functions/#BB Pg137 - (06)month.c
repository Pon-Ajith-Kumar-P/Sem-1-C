#include<stdio.h>
char *month(int n)
{
    char *month[]={"January","February","March","April","May","June","July","August","September","October","November","Decemnber"};
    return month[n-1];
}
#include<string.h>
int main()
{
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    printf("\nMonth %d : %s",n,month(n));
}