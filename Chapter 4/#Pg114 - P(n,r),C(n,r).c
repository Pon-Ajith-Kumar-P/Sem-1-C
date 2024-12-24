#include<stdio.h>
int fact(int a)
{
    if(a==0 || a==1)
        return 1;
    return a*fact(a-1);
}
int permute(int n,int r)
{
    if(n<r)
    {
        printf("\nPermutation is not possible");
        return -1;
    }    
    int res = fact(n) / fact(n-r);
    return res;
        
}
int combinate(int n,int r)
{
    if(n<r)
    {
        printf("\nCombinatorics is not possible");
        return -1;
    }    
    int res = fact(n) / ( fact(r) * fact(n-r) );
    return res;
}
int main()
{
    int n,r;
    printf("\nEnter n : ");
    scanf("%d",&n);
    printf("\nEnter r : ");
    scanf("%d",&r);
    if(permute(n,r)!=-1)
        printf("\nP(%d,%d) = %d",n,r,permute(n,r));
    if(combinate(n,r)!=-1)
        printf("\nC(%d,%d) = %d",n,r,combinate(n,r));
}