#include<stdio.h>
void main()
{
    float i,ht,wid,ht1,wid1;
    ht=1189;
    wid=841;
    printf("\nThe size of A0 paper = %fmm * %fmm",ht,wid);
    for(i=1;i<=8;i++)
    {
        ht1=wid;
        wid1=ht/2;
        ht=ht1;
        wid=wid1;
        printf("\nThe size of A%.0f paper = %fmm * %fmm",i,ht,wid);
    }
    
}