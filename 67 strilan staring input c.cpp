#include<stdio.h>
#include<string.h>
int main()
{
	
	char str[20];
	
	gets(str);
	
	printf("%d\n",strlen(str)); 
	puts(strupr(str));
	puts(strrev(str));
	
	return 0;
}