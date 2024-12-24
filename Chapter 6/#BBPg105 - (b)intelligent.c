# include <stdio.h>
int main( )
{
    int y;
    float x, i;
    printf("\nThe table for the intelligence level");
    printf("\n\ty\t\tx\t\ti");
    for(y=1;y<=6;y++)
    {
        for(x=5.5;x<=12.5;x+=0.5)
        {
            i=2+(y+0.5*x);
            printf("\n\t%d\t\t%.2f\t\t%.2f",y,x,i);
        }
    }
    return 0 ;
}