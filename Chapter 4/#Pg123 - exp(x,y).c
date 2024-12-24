#include<stdio.h>
int expo(int x,int y)
{
    /*int ans = 1;
    for(int i=1;i<=y;i++)
    {
        ans *= x; 
    }
    return ans;*/
    if(y==0)
        return 1;
    else
        return x*expo(x,y-1);
}
int main()
{
    int x,y;
    printf("\nEnter base : ");
    scanf("%d",&x);
    printf("\nEnter the exponent : ");
    scanf("%d",&y);
    printf("\n%d to the power %d = %d",x,y,expo(x,y));
}