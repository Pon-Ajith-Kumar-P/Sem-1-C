#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    printf("\nEnter a character: ");
    scanf("%c",&c);
    (isalnum(c)==0)?printf("\n%c is a special symbol",c):printf("\n%c is not a special symbol",c);
}