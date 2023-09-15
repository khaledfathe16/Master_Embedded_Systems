#include <stdio.h>

//#include <stdlib.h>
//#include <conio.h>



int main()
{
	int  x , element;
	
	printf("Enter number of elements : ");
	scanf("%d",&x);
	int arr[x];
	
	for(int i = 0 ; i < x ; i++)
	{
		scanf("%d" , &arr[i]);
		
	}
	
	printf("Enter the elements to be searched : ");
	scanf("%d" , &element);
		
		for(int i = 0 ; i< x ; i++)
		{
				if(arr[i] == element)
				{
					printf("Number found at the location  = %d" , i+1);
					
				}
			
			
		}
	return 0;
}

