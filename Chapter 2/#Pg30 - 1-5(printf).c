#include<stdio.h>
#include<math.h>
//Prog.C Example 1 Pg.30 
/*void main()
{
    int a,b;
    printf("\nEnter the two four digit numbers: ");
    scanf("%4d %2d",&a,&b);
    printf("\nThe two numbers are %d and %d",a,b);
}*/
//Prog.C Conceptual
/*void main()
{
    int x=printf("Hello World\n");
    printf("%d",x);
}*/
//Prog.C Conceptual
/*void main()
{
    int count;
    printf("Hello %nWorld",&count);
    printf("%d",count);
}*/
//Prog.C Example 4
/*void main()
{
    float a,b,c,s,area;
    printf("\nEnter Side 1 : ");
    scanf("%f",&a);
    printf("\nEnter Side 2 : ");
    scanf("%f",&b);
    printf("\nEnter Side 3 : ");
    scanf("%f",&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nThe area of the triangle = %.3f sq.units",area);
}*/
//Prog.C Example 5
void main()
{
    float x1,y1,x2,y2,dist;
    printf("\nEnter Point 1 (x1,y1) : ");
    scanf("%f %f",&x1,&y1);
    printf("\nEnter Point 2 (x2,y2) : ");
    scanf("%f %f",&x2,&y2);
    dist=sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    printf("\nThe distance between the points = %.3f units",dist);
}
