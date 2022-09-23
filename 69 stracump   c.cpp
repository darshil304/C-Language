#include<stdio.h>
#include<string.h>

int main()
{
	
	char str1[40]="HI",str2[40]="HI";
	
	strcmp(str1,str2); 
	
	printf("%d",strcmp(str1,str2));
	
	if(strcmp(str1,str2) == 0)
	{
		printf(" Equal  ...!  ");
	}
	else
	{
			printf(" NOT Equal  ...!  ");
	}
	
	
	return 0;	
}