#include<stdio.h>
int main()
{
	int num1,num2,res,choice;
	printf("\nenter your choice :");
	scanf("%c",&choice);
	scanf("%d%d", &num1,&num2);
	
	switch(choice)
	{
		case'+':
			printf("%d",num1+num2);
			break;
			case'-':
			printf("%d",num1-num2);
			break;
			case'*':
			printf("%d",num1*num2);
			break;
			case'/':
			printf("%d",num1/num2);
			break;
			case'%':
			printf("%d",num1%num2);
			break;		
				
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}