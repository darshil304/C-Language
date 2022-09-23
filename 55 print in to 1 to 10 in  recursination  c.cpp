#include<stdio.h>
int repeatFun(int x)
{
	if(x>=1)
	{
		printf("%d ",x);
		repeatFun(x-1);
	}	
}

int main()
{
	repeatFun(10);
	
	return 0;
}