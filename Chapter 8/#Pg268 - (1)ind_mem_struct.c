#include<stdio.h>
struct POINT{
    float x;
    float y;
};
void display(float p,float q)
{
    printf("\nThe Point = (%.2f,%.2f)",p,q);
}
int main()
{
    struct POINT p;
    printf("\nEnter the absicca of the point : ");
    scanf("%f",&p.x);
    printf("\nEnter the ordinate of the point : ");
    scanf("%f",&p.y);
    display(p.x,p.y);
}