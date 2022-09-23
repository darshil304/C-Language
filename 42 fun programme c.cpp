#include<stdio.h>

int fun(int p,int q)

{
	char test;
	
	printf("enter your choice");
	scanf("%c",&test);
	
	switch(test)
	{
		case '+': printf("%d",p+q);
		break;
		
		case '-': printf("%d",p-q);
		break;
		
		case '*': printf("%d",p*q);
		break;
		
		default:
			   printf("invalid choice....!");
			   
    }
	   
	int main ()	
	fun(12,32);
	return 0;
}