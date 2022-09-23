#include<stdio.h>
int main()
{   
	int a[10][10],b[10][10],c[10][10];
	
	int row,col,x;
	
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",a[row][col]);
			
		}
		printf("\n");
	}
	
	
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			scanf("%d",&b[row][col]);
		}
	}
	
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",b[row][col]);
		}
		printf("\n");
	}
		
	for(row=0;row<3;row++)
	{
	
		for(col=0;col<3;col++) 
		{
			c[row][col]=0;
			
			for(x=0;x<3;x++)
			{
				c[row][col] = c[row][col]  + a[row][x]+b[x][col];
			}					
		}	
			
	}
	
	printf("\n");
		
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",c[row][col]);
		}
		
		printf("\n");
	}
}                                                          