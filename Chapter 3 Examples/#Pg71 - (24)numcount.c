#include<stdio.h>
int main()
{
    int num,p=0,n=0,z=0;
    printf("\nYou can enter any numbers.\nIf you enter -1 then termination occurs.");
    printf("\nEnter any number: ");
    scanf("%d",&num);
    while(num!=-1)
    {
        if(num>0)
            p++;
        if(num<0)
            n++;
        if(num==0)
            z++;
        printf("\nEnter any number: ");
        scanf("%d",&num);
    }
    printf("\nNo. of positive number = %d",p);
    printf("\nNo. of negative number = %d",n);
    printf("\nNo. of zeroes          = %d",z);
    return 0;
    

}