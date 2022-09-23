#include <stdio.h> 
int main()
{
    int days, years, weeks, choice;

    printf("enter tha number : \n");
	scanf("%d",&choice) ;

    
    years = choice/365;
    weeks = (choice %365)/7;
    days = choice- ((years*365) + (weeks*7));
    
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);
    
    
    return 0;
}