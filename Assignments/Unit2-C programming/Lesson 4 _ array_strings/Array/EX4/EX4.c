#include <stdio.h>

//#include <stdlib.h>
//#include <conio.h>



int main()
{
	int x , element , location ;
	
	printf("Enter number of elements : ");
	scanf("%d",&x);
	
	int arr[x];
	
	for(int i = 0 ; i<x ; i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
	printf("Enter the element to be inserted : ");
	scanf("%d",&element);
	
	printf("enter the location : ");
	scanf("%d",&location);
	
		for(int i = 0 ; i<x ; i++)
	{
		if((i) == location - 1)
		{
			
			printf(" %d ",element);
			
		}
		
		printf(" %d ",arr[i]);
		
	}
	
	
	return 0;
}

