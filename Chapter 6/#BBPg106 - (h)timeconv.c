#include<stdio.h>
int main()
{
    for(int hr=0;hr<=23;hr++)
    {
        if(hr==0)
        {
            printf("\n%d Midnight",hr+12);
        }
        else if(hr>=0 && hr<12)
        {
            printf("\n%d A.M.",hr);
        }
        else if(hr==12)
        {
            printf("\n%d noon",hr);
        }
        else if(hr>=12 && hr<=23)
        {
            printf("\n%d P.M.",hr-12);
        }

    }
    
}