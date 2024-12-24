#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    printf("\nEnter a character: ");
    scanf("%c",&c);
    if(isalpha(c)!=0)
        printf("\n%c is a alphabet",c);
    if(isdigit(c)!=0)
        printf("\n%c is a numeric digit",c);
    if(isgraph(c)!=0)
        printf("\n%c is a graphical character",c);
    if(iscntrl(c)!=0)
        printf("\n%c is a control character",c);
    if(isprint(c)!=0)
        printf("\n%c is a printable character",c);
    if(isupper(c)!=0)
        printf("\n%c is a uppercase letter",c);
    if(islower(c)!=0)
        printf("\n%c is a lowercase letter",c);
    if(isxdigit(c)!=0)
        printf("\n%c is a hexadecimal character",c);
    if(isspace(c)!=0)
        printf("\n%c is a whitespace character",c);
    return 0;
}
