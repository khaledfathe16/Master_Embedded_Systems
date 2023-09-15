#include <stdio.h>

int main()
{
	int x = 0  , y = 0  , temp = 0;
	printf("Please enter the ROWS and COLUMNS : ");
	scanf("%d %d", &x ,&y);
	
	float arr[x][y] ; 
	
	if(x < y)
	{
	
	for(int i = 0 ; i<x ; i++)
	{
		
		for(int j = 0 ; j < y ; j++)
		{
			printf("Enter element a%d%d : " , i+1 , j+1);
			scanf("%f" , &arr[i][j]);

		}
		
	}		
	
	for(int i = 0 ; i<x ; i++)
	{
		
		for(int j = 0 ; j < y ; j++)
		{			
			printf(" %.1f "  , arr[i][j]);
		}
		
		printf("\n");
	}	
	
	/********************************************************************************************************************************/
	
	

	
	
	printf("Transpose of matrix :  \n");
	
	for(int i = 0 ; i < y ; i++)
	   {
		
		for(int j = 0 ; j < x ; j++)
		{
			
			printf(" %.1f " , arr[j][i]);
	
		}
		
		printf("\n");
	}
	}
	else if(x>y)
	{
		
		temp = x;
		x = y;
		y = temp;
		
	for(int i = 0 ; i<x ; i++)
	{
		
		for(int j = 0 ; j < y ; j++)
		{
			printf("Enter element a%d%d : " , i+1 , j+1);
			scanf("%f" , &arr[j][i]);
			
		}
	}		
	
	for(int i = 0 ; i<x ; i++)
	{
		
		for(int j = 0 ; j < y ; j++)
		{
			
			printf(" %.1f "  , arr[j][i]);
			
		}
		
		printf("\n");
	}	
	
	/********************************************************************************************************************************/
	
	printf("Transpose of matrix :  \n");
	
	for(int i = 0 ; i < y ; i++)
	   {
		
		for(int j = 0 ; j < x ; j++)
		{
			
			printf(" %.1f " , arr[i][j]);
			
		}
		
		printf("\n");
	}
		
	}
	
	else 
	{
		
	for(int i = 0 ; i<x ; i++)
	{
		
		for(int j = 0 ; j < y ; j++)
		{
			printf("Enter element a%d%d : " , i+1 , j+1);
			scanf("%f" , &arr[i][j]);
			
		}
		
	}		
	
	for(int i = 0 ; i<x ; i++)
	{
		
		for(int j = 0 ; j < y ; j++)
		{
			
			
			printf(" %.1f "  , arr[i][j]);
			
			
		}
		
		printf("\n");
	}	
	
	/********************************************************************************************************************************/

	printf("Transpose of matrix :  \n");
	
	for(int i = 0 ; i < x ; i++)
	   {
		
		for(int j = 0 ; j < y ; j++)
		{
			
			printf(" %.1f " , arr[j][i]);
			
		}
		
		printf("\n");
	}

	}
		
	
return 0;	
}