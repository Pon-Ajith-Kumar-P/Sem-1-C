#include<stdio.h>
int F(int x,int y)
{
    if(x<y)
        return 0;
    return (F(x-y,y) + 1);
}
int main()
{
    int x,y;
    printf("\nEnter x : ");
    scanf("%d",&x);
    printf("\nEnter y : ");
    scanf("%d",&y);
    printf("\nThe value of the function = %d",F(x,y));
}