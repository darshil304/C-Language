#include<stdio.h>
 main()
{
	int eng,sci,math,ss,guj,sans;
	
	float percentage,total;
	
	printf("Enter marks:\n");
	scanf("%d%d%d%d%d%d",&eng,&sci,&math,&ss,&guj,&sans);
	
	printf("english = %d\nscience = %d\nMaths = %d\nsocialscience = %d\ngujrati = %d\nsanskrut = ",eng,sci,math,ss,guj,sans);
	
	total = eng+sci+math+ss+guj+sans;	
	printf("\nTotal Marks = %f",total);
	
	percentage = total/6;
	printf("\nPercentage = %f",percentage);
	
	if(percentage >=90)
	{
		printf("\nGrade A...!");
	}
	
	else if(percentage>=80)
	{
		printf("\nGrade B...!");
	}
	else if(percentage>=60)
	{
		printf("\nGrade C...!");
	}
	else if(percentage>=40)
	{
		printf("\nGrade D...!");
	}
	
	else
	
	{
		printf("\nGrade %%%...!");
	}
	
	
	return 0;
}