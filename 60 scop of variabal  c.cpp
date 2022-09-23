#include<stdio.h>
int z=34;
int test(int x)
{
	int test;
	test=x;
	printf("z=%d and x=%d\n",z,test);
}
int main()
{
	int y=-67,k;
	test(-121);
	printf("main z = %d and test=%d\n",z,test);
	
	for(k=0;k<5;k++)
	

	printf("%d",k);
	return 0;
}