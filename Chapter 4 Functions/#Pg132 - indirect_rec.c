//C Program to print always 0 for an positive input
#include<stdio.h>
int Func1(int n);
int Func2(int x);
int Func1(int n)
{
    if(n==0)
        return n;
    else 
        return Func2(n);
}
int Func2(int x)
{
    return Func1(x-1);
}
int main()
{
    int n;
    printf("\nEnter n : ");
    scanf("%d",&n);
    printf("\nThe return value = %d",Func1(n));
}