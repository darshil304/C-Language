#include<stdio.h>
int main()
{
	int math,phy,cham;
	float percentage,total;
	
	printf("Enter marks:\n");
	scanf("%d%d%d",&math,&phy,&cham);
	
	if(math>=65)
	{
		printf("\nthis is a eligibel...");
	}
	else
	{
		printf("\nthis is a not eligebel...");
	}
	if(phy>=55)
	{
		printf("\nthis is a eliegibel...");
	}
	else
	{
		printf("\nthis is a not eligebel...");
	}
	if(cham>=50)
	{
		printf("\nthis is a eligebel...");
	}
	else
	{
		printf("\nthis is a not eligebel...");
	}
	
	printf("\nmaths = %d\nphysics = %d\nchamstry = %d\n", math,phy,cham);
	
	
	total = math+phy+cham;	
	printf("\nTotal Marks = %f",total);
	
		
	percentage = total/3;
	printf("\nPercentage = %f",percentage);	
    
    if(total>=190)
    {
    	printf("\nyou are eligebl");
	}
	else
	{
		printf("\nyou are not eligebel");
	}
	return 0;
}