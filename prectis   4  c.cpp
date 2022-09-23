#include<stdio.h>
int main()
{
	
    int num1,num2,res;
    char choice;
	printf("%c,\nenter your choice:");
	scanf("%c",choice);
	printf("enter two integer values:\n ");
	scanf("%d %d,&num1,&num2");
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
		case'%':
		printf("%d",num1%num2);
		break;
		case'/':
		printf("%d",num1/num2);
		break;
		          
		
	   }   

	return 0;
	
}