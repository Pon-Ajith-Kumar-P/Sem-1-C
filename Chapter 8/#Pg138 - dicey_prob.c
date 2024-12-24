#include<stdio.h>
int main()
{
    int i=1;
    int j=2;
    printf("\ni=%d and j=%d and k=%d",i,j);
    printf("\n\ni and j value gets printed. \nBut k was not called and hence junk value gets printed");
    printf("\n\ni=%d",i,j);
    printf("\n\ni value gets printed. \nBut j value was not printed");
    return 0;
}