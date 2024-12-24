#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    printf("\nEnter an alphabet: ");
    scanf("%c",&c);
    (islower(c)==0)?printf("\n%c is not a lowercase letter",c):printf("\n%c is a lowercase letter",c);
}