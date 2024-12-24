#include<stdio.h>
#include<math.h>
void main()
{
    float lat1,lat2,lon1,lon2;
    printf("\nEnter the latitude of Place 1 : ");
    scanf("%f",&lat1);
    printf("\nEnter the longitude of Place 1 : ");
    scanf("%f",&lon1);
    printf("\nEnter the latitude of Place 2 : ");
    scanf("%f",&lat2);
    printf("\nEnter the longitude of Place 2 : ");
    scanf("%f",&lon2);
    lat1=lat1*3.14/180;
    lon1=lon1*3.14/180;
    lat2=lat2*3.14/180;
    lon2=lon2*3.14/180;
    float d;
    d=3963 * acos(sin(lat1)*sin(lat2) + cos(lat1)*cos(lat2)*cos(lon2-lon1)) ;
    printf("The distance in nautical miles = %f",d);
}