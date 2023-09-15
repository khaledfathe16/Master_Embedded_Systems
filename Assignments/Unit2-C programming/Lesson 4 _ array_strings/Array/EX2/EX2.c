#include <stdio.h>


int main()
{
	int x ;
	float average = 0 , sum = 0;
	printf("Enter the number of data : ");
	scanf("%d" , &x);
	float arr[x];
	
	for(int i = 0 ; i<x ; i++ )
	{
		
		printf("%d. Enter number : ", i+1);
		scanf("%f",&arr[i]);
		sum += arr[i];
	}
	
	average = sum / x;
	
	printf("Average = %f" , average);
	
return 0;	
}