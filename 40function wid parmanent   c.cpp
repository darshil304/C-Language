#include<stdio.h>
int getsum(int x,int y)
{
	printf("sum of %d and %d is = %d\n",x,y,x+y);
}

	int main()
{
	int a,b;
	printf("enter first value:");
	scanf("%d",&a);
	printf("%d",&b);
	scanf("%d",&b);
	getsum(a,b);
	return 0;
	}	


