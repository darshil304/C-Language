#include<stdio.h>
#include<string.h>

int main()
{
	
	char str1[40]="HI ",str2[40]="How are you?";
	
	strcat(str1,str2);
	
	printf("%s",str1);
	
	
	return 0;	
}