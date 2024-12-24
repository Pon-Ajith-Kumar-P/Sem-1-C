#include<stdio.h>
#include<math.h>
void main() 
{
    float x,y;
    printf("\nEnter the value of the point (x,y) : ");
    scanf("%f%f",&x,&y);
	if((x==0)&&(y==0))
    {
        printf("\nThe given point (%.2f,%.2f) is the origin ",x,y);
    }
    else if((x==0)&&(y!=0))
    {
        printf("\nThe given point (%.2f,%.2f) is on Y axis",x,y);
    }
    else if((x!=0)&&(y==0))
    {
        printf("\nThe given point (%.2f,%.2f) is on X axis",x,y);
    }
    else
    {
        printf("\nThe given is not an origin and it doesn't lies on X and Y axis");
    }
}
