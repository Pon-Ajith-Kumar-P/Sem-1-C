#include<stdio.h>

struct POINT{
    float x;
    float y;
};

void display(struct POINT p)
{
    printf("\nThe Point = (%.2f,%.2f)", p.x, p.y);
}

int main()
{
    struct POINT p;
    
    printf("\nEnter the abscissa of the point: ");
    scanf("%f", &p.x);
    
    printf("\nEnter the ordinate of the point: ");
    scanf("%f", &p.y);
    
    display(p);
    
    return 0;
}
