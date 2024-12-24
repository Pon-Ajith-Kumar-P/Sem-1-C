#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    int u=0,l=0,n=0,count=0;
    printf("\nYou can enter any characters.\nIf you enter ~ then termination occurs.");
    printf("\nEnter any character: ");
    scanf("%c",&c);
    while(c!='~')
    {
        count++;
        if(isupper(c)!=0)
            u++;
        if(islower(c)!=0)
            l++;
        if(isdigit(c)!=0)
            n++;
        printf("\nEnter any character: ");
        scanf(" %c",&c);
    }
    printf("\nYou have entered %d characters.",count);
    printf("\nNo. of uppercase characters = %d",u);
    printf("\nNo. of lowercase characters = %d",l);
    printf("\nNo. of numeric characters   = %d",n);
    return 0;
}