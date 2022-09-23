#include<stdio.h>
int getv()
    {
    	
    	int x=1;
    	static int y=1;
	    printf("x = %d and y = %d\n",x,y);
    	
    	x++;
	    y++;
	}

int main()
{
	getv;
	getv;
	getv;
		
	return 0;
	
}