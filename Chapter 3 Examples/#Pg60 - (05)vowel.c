#include<stdio.h>
#include<ctype.h>
int main()
{
    char c,i;
    printf("\nEnter a character to check vowel or not: ");
    scanf("%c",&c);
    i = toupper(c);
    if(i=='A' || i=='E' ||i=='I' ||i=='O' ||i=='U')
        printf("\n%c is a vowel",c);
    else
        printf("\n%c is not a vowel",c);
    return 0;
}