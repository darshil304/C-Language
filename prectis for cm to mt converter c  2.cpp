#include <stdio.h>
 
int main()
{
  	float cm, meter, km , miles;
 
 	printf("\n Please Enter the Length in Centimeters  :  ");
  	scanf("%f", &cm);
  
  	meter = cm / 100.0;
  	km = cm / 100000.0; 	
    miles = cm / 160934.0;
    printf("\n Length in Meters  = %f", meter);
    printf("\n Length in Kilometers   = %f", km);
    printf("\n langht in miles  = %f ",  miles);
   	return 0;
}