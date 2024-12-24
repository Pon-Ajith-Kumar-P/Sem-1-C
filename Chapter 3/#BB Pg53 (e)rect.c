#include<stdio.h> 
#include<math.h>
void main() 
{ 
        float l,b,area,peri;
        printf("\nEnter the length of the rectangle (in m) : ");
        scanf("%f",&l); 
        printf("\nEnter the breadth of the rectangle (in m): ");
        scanf("%f",&b);
        area=l*b;
        printf("\nThe area of the rectangle = %f sq.m",area);
        peri=2*(l+b);
        printf("\nThe perimeter of the rectangle = %f sq.m",peri);
        if(area>peri)
        {
            printf("\nThe area of rectangle is greater than the perimeter of the rectangle.");
        }
        else if(area==peri)
        {
            printf("\nThe area of rectangle is equal to the perimeter of the rectangle.");
        }
        else
        {
            printf("\nThe area of rectangle is not greater than the perimeter of the rectangle.");
        }
        
} 
