#include<stdio.h>
#include<string.h>
int main()
{
	
	char str1[40]="Hello ewre";
	
	int n,length=0;
	
	for(n=0;str1[n]!='\0';n++)
	{
		length++;
	}
	printf("%d",length);
	

	
	return 0;	
}