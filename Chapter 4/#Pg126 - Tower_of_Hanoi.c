#include<stdio.h>
void TOH(int n,char source,char aux,char dest)
{
    if(n<=0)
        printf("\nInvalid Disc");
    if(n==1)
        printf("\nMove a disc from %c to %c",source,dest);
    if(n>=2)
    {
        TOH(n-1,source,dest,aux);
        TOH(1,source,aux,dest);
        TOH(n-1,aux,source,dest);
    }
}
int main()
{
    int n;
    printf("\nEnter the number of discs : ");
    scanf("%d",&n);
    printf("\nThe Minimal Solution for the Tower of Hanoi with %d discs\n",n);
    TOH(n,'A','B','C');
    return 0;
}