# include <stdio.h> 
int romanize(int yr,int num, char c)
{
    int i=yr/num;
    for(int j=1;j<=i;j++)
    {
        printf("%c",c);
    }
    return yr%num;
}
int main() 
{ 
    int yr;
    printf("\nEnter the year to convert into roman numeral : ");
    scanf("%d",&yr);
    printf("\nThe roman numeral notation of %d = ",yr);
    yr=romanize(yr,1000,'M');
    yr=romanize(yr,500,'D');
    yr=romanize(yr,100,'C');
    yr=romanize(yr,50,'L');
    yr=romanize(yr,10,'X');
    yr=romanize(yr,5,'V');
    yr=romanize(yr,1,'I');
}