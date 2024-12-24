#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
void main() 
{ 
        int h;
        printf("\nEnter a number to find its absolute value : ");
        scanf("%d",&h); 
        int res=abs(h);    
        printf("\nAbsolute value of %d = %d ",h,res);
} 
