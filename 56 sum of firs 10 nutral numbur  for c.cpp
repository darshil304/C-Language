#include<stdio.h>

int getSum(int x)
{
	
	if(x>1)
	{
		
		return x+getSum(x-1);
	}
	
}

int main()
{
	
	printf("%d",getSum(2308));
	return 0;
}