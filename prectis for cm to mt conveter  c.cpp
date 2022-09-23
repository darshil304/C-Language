#include<stdio.h>  
int main()   
{  
double value_in_cm = 9998;  
double meter;  
meter = value_in_cm / 100;  

double kelometer;
printf ("Value in meter is: %.2f \n", meter);   
return 0;  
}
#include <stdio.h>
 
int main()
{
  	float cm, meter, km;
 
 	printf("\n Please Enter the Length in Centimeters  :  ");
  	scanf("%f", &cm);
  
  	meter = cm / 100.0;
  	km = cm / 100000.0; 	
 
    printf("\n Length in Meters  = %.4f", meter);
    printf("\n Length in Kilometers   = %.4f", km);
  
   	return 0;
}  