#include<stdio.h>
#include<ctype.h>
void main()
{
    char c;
    printf("\nEnter an alphabet to convert it to other case: ");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
        printf("\nThe lowercase of %c = %c",c,tolower(c));
    else if(c>='a' && c<='z')
        printf("\nThe uppercase of %c = %c",c,toupper(c));
}