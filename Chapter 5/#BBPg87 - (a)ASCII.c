#include<stdio.h>
int main()
{
    printf("ASCII values\tASCII characters");
    int i=1;
    while(i<256)
    {
        printf("\n%d\t\t\t%c",i,i);
        i++;
    }
    return 0;
}
