#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int permute(int n,int r)
{
    if(r>n)
    {
        printf("\nPermutation is not possible\n");
        return -1;
    }  
    return fact(n)/fact(n-r);
}
int combinate(int n,int r)
{
    if(r>n)
    {
        printf("\nCombinatorics is not possible");
        return -1;
    }  
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n,r;
    printf("\nEnter n : ");
    scanf("%d",&n);
    printf("\nEnter r : ");
    scanf("%d",&r);
    printf("\nPermutation\n");
    if(permute(n,r)!=-1)
        printf("nPr = %dP%d = %d",n,r,permute(n,r));
    printf("\nCombinatorics\n");
    if(combinate(n,r)!=-1)
        printf("nCr = %dC%d = %d",n,r,combinate(n,r));
}