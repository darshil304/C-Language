#include<stdio.h>

int main()
{
	
	int arr[6] = {1,126,12,4,143,65}; // 12, -76 , 122
	int x,y,temp=0;
	for(x=0;x<6;x++)//2 ; 2<3; 2++
	{
		for(y=x+1;y<6;y++) //2+1;3<3;2++
		{
			if(arr[x]>arr[y]) // -76 >122
			{
				temp = arr[x]; // temp =12
				arr[x]	= arr[y];//	a[0]=-76;
				arr[y] 	= temp;	//	a[1]=12;		
				
			//-76,12,122
			}
		}
	}
	
	for(x=0;x<6;x++)
	{
		printf("%d ",arr[x]);
	}
	return 0;
}