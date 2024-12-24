#include<stdio.h>
float fah_to_cel(float fah)
{
    return ((fah - 32) * 5 / 9);
}
int main()
{
    printf("\nCreating the table of values\n");
    printf("Fah\tCel\n");
    for(int i=32;i<213;i++)
    {
        printf("%d\t%.2f\n",i,fah_to_cel(i));
    }
}