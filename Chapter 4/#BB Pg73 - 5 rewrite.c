# include <stdio.h> 
int main( ) 
{ 
    float sal ; 
    printf ("\nEnter the salary: "); 
    scanf ("%f", &sal); 
    (sal>=25000 && sal<=40000)? printf ( "\nManager" ) : ((sal>=15000 && sal<25000)? printf("\nAccountant") : printf("\nClerk"));
 } 