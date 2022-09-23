#include<stdio.h>
int getvalue(int x,int y)
 {


	int a,b,sum;
	a=x;
	b=y;
	sum = a+b;
	if(a>b)
	{
		printf("max =%d",a);
	}
	else
	{
		printf("max =%d",b);
		
	}
	printf("%d",sum);
}
int main()
{
	getvalue(10,20);
	return 0;
	
 }