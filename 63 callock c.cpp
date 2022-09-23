#include<stdio.h>
int main()
{
	int *ptr;
	
	ptr = (int*calloc(400,sizeof(int));
	
	if(ptr==NULL)
	{
		printf("Memory NOT allocated...!");
	}
	else
	{
		printf("Memory allocated...!");
	}
	
	
	return 0;
}