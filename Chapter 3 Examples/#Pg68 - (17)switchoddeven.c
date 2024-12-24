#include <stdio.h>
int main() 
{
    int n;
    printf("\nEnter a number from 1 to 10: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            printf("\n%d is an odd number",n);
            break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            printf("\n%d is an even number ",n);
            break;
        default:
            printf("\n%d is not in 1 to 10 ",n);
            break;
    }
    return 0;
}