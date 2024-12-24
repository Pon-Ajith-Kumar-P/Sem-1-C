#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("\nEnter how many numbers: ");
    scanf("%d",&n);
    int i=1;
    float sq,cu;
    printf("\n_________________________");
    printf("\nNumber\tSquare\tCube");
    printf("\n_________________________");
    do
    {
        sq = pow(i,2);
        cu = pow(i,3);
        printf("\n%d\t%.0f\t%.0f",i,sq,cu);
        i++;
    } while (i<=n);
    printf("\n_________________________");
    return 0;
}