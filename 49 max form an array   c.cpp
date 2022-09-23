#include<stdio.h>
int main()
{
	int arr[] = {-2,5,1};
	int max,i,test;
	
	max =arr[0];
	for(i=0;i<3;i++)
	{
		if(max>arr[i])
		{
			max=max;
		}
	}
	printf("%d",&max);
	return 0;
}