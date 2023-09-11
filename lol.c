#include <stdio.h>

//#include <stdlib.h>
//#include <conio.h>

int main()
{
     
	 int n;
	 int sum =1;
	 printf("Please enter a number : ");
	 scanf("%d",&n);
	 for(int i = 1 ; i <= n ; i++)
	 {
		 sum *= i;
		 
	 }
	
	printf("Result = %d" , sum);
	
	
	
	
	return 0;
}