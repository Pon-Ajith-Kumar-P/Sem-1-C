#include<stdio.h>
#include<math.h>
int fact(int a)
{
    if(a==0 || a==1)
        return 1;
    return a*fact(a-1);
}
int main()
{
    int n;
    float i,term,sum=0;
    printf("\nEnter how many terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        term=pow(i,i)/fact(i);
        sum = sum + term;
    }
    printf("\nThe sum of the series = %.2f",sum);
    return 0;
}