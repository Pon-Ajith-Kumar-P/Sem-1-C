#include<stdio.h>
#include<math.h>
struct pointdist{
    float x;
    float y;
}p1,p2;
int main()
{
        printf("\nEnter the x co-ordinate of point 1 : ");
        scanf("%f",&p1.x);
        printf("\nEnter the y co-ordinate of point 1 : ");
        scanf("%f",&p1.y);
        printf("\nEnter the x co-ordinate of point 2 : ");
        scanf("%f",&p2.x);
        printf("\nEnter the y co-ordinate of point 2 : ");
        scanf("%f",&p2.y);
        printf("\nPoint1 = (%.2f,%.2f)",p1.x,p1.y);
        printf("\nPoint2 = (%.2f,%.2f)",p2.x,p2.y);
        float c = sqrt(pow(p1.x - p2.x,2)+pow(p1.y - p2.y,2));
        printf("\nDistance between two points = %.3f",c);
        return 0;    
}