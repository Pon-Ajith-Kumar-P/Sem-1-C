#include<stdio.h>
void main() 
{
    float x1,y1,x2,y2,x3,y3,s1,s2,s3;
    printf("\nEnter the values of the first point (x1,y1) : ");
    scanf("%f%f",&x1,&y1);
    printf("\nEnter the values of the second point (x2,y2) : ");
    scanf("%f%f",&x2,&y2);
    printf("\nEnter the values of the third point (x3,y3) : ");
    scanf("%f%f",&x3,&y3);
    s1=(y2-y1)/(x2-x1);
    s2=(y3-y2)/(x3-x2);
    s3=(y3-y1)/(x3-x1);
    printf("\nSlope 1 = %f",s1);
    printf("\nSlope 2 = %f",s2);
    printf("\nSlope 3 = %f",s3);
    if((s1==s2)&&(s2==s3)&&(s1==s3))
    {
        printf("\nThe given points are collinear points.");
    }
    else
    {
        printf("\nThe given points are non-collinear points.");
    }
}