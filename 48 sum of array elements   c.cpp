#include<stdio.h>
int main()
{
	int a[] = {10,20,30,40,50},i;
	
	int sum=0;
	
	for(i=0;i<5;i++)
    {
    	sum = sum+a[i];
		}	
		printf("%d",sum);
	return 0;
}