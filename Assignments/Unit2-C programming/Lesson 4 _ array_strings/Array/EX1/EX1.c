#include <stdio.h>


int main()
{
	
	float arr1[2][2];
	
	float arr2[2][2];
	
	printf("Enter the element of 1st matrix : \n");
	for(int i = 0 ; i<2 ; i++)
	{
		for(int j = 0 ; j<2 ; j++)
	   {
		printf("Enter a%d%d : ",i+1 , j+1);
		scanf("%f" , &arr1[i][j]); // Here we decide to take the way of set the value row by row 
		
	   }
		
	}
	
	printf("Enter the element of 2st matrix : \n");
	for(int i = 0 ; i<2 ; i++)
	{
		for(int j = 0 ; j<2 ; j++)
	   {
		printf("Enter b%d%d : ",i+1 , j+1);
		scanf("%f" , &arr2[i][j]); // Here we decide to take the way of set the value row by row 
		
	   }
		
	}
	
	printf("Sum of matrix : \n");
	for(int i = 0 ; i<2 ; i++)
	{
		for(int j = 0 ; j<2 ; j++)
	   {
		   
		printf(" %.1f ",arr1[i][j] + arr2[i][j]);
		
		
	   }
		
		printf("\n");
	}
	
	
	
	return 0;
}