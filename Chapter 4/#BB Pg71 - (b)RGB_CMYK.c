#include<stdio.h>
int main()
{
    float r,g,b;
    printf("\nEnter the value of RED (0 to 255): ");
    scanf("%f",&r);
    printf("\nEnter the value of GREEN (0 to 255): ");
    scanf("%f",&g);
    printf("\nEnter the value of BLUE (0 to 255): ");
    scanf("%f",&b);
    float c,m,y,k,w;
    if(r==0 && g==0 && b==0)
    {
        c=0; m=0; y=0; k=1;
    }
    else
    {
        r=r/255; g=g/255; b=b/255;
        w=(r>g)?((r>b)?r:b):((g>b)?g:b);
        c=(w-r)/w;
        m=(w-g)/w;
        y=(w-b)/w;
        k=1-w;
    }
    printf("\nCORRESPONDING VALUES:\nCYAN = %.2f \nMAGNETA = %.2f \nYELLOW = %.2f \nBLACK = %.2f",c,m,y,k);
    return 0;
}