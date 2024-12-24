#include<stdio.h>

struct POINT{
    float x;
    float y;
};

void display(struct POINT *p)
{
    printf("\nThe Point = (%.2f,%.2f)", p->x, p->y);
}

int main()
{
    struct POINT *p;
    struct POINT pt;
    p = &pt;
    printf("\nEnter the abscissa of the point: ");
    scanf("%f",&p->x);
    
    printf("\nEnter the ordinate of the point: ");
    scanf("%f",&(*p).y);
    
    display(&pt);
    
    return 0;
}
