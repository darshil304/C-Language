#include<stdio.h>
int main()
{
	int i=1;
    xyz:
	if(i<=1)	
	{
		printf("%d",i);
		i++;
	}
	goto xyz;
	return 0;
}