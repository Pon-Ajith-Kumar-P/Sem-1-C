#include<stdio.h>
struct complex{
    float real;
    float img;
}num[2];
int main()
{
    int choice;
    for(int i=0;i<2;i++)
    {
        printf("\nComplex Number %d Data",i+1);
        printf("\nEnter the real part of the complex number %d : ",i+1);
        scanf("%f",&num[i].real);
        printf("\nEnter the imaginary part of the complex number %d : ",i+1);
        scanf("%f",&num[i].img);
    }
    do{
        printf("\n\n1. Display the complex number");
        printf("\n2. Add the complex number");
        printf("\n3. Subtract the complex number");
        printf("\nEnter your choice ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                for(int i=0;i<2;i++)
                    {
                        printf("\nComplex Number %d = %.2f%+.2fi",i+1,num[i].real,num[i].img);
                        printf("\n");
                    }
            break;
            case 2:
                printf("\nSum of Complex Numbers = %.2f%+.2fi",num[0].real+num[1].real,num[0].img+num[1].img);
                printf("\n");
            break;
            case 3:
                printf("\nDifference of Complex Numbers = %.2f%+.2fi",num[0].real-num[1].real,num[0].img-num[1].img);
                printf("\n");
            break;
        }
    }while(choice==1 || choice==2 ||choice==3);
    return 0;
}