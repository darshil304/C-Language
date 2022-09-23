#include<stdio.h>
int main()
{
	
	int a[2][2],b[2][2],sum[2][2];
	
	int row,col;
	
	printf("enter first array elements :\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	
	printf("first array elements :\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",a[row][col]);
		}
		
		printf("\n");
	}
	

	
	printf("\nenter second array elements :\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&b[row][col]);
		}
	}
	
	printf("\nsecond array elements :\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",b[row][col]);
		}
			printf("\n");
		}
	printf("\nSum of 2d array :\n");
	for(row=0;row<2;row++)//0;1<2;1++
	{
		for(col=0;col<2;col++)//1;1<2;1++
		{
			sum[row][col] =	a[row][col]+b[row][col];
			printf("%d ",sum[row][col]);
		}
			printf("\n");
	}
	
	return 0;
}