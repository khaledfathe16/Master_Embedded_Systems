#include <stdio.h>

//#include <stdlib.h>
//#include <conio.h>

int main()
{
	
	
	char arr[100];
	int counter = 0;
	printf("Enter a string : ");
	
	scanf("%s" , arr);
	
	for(int i = 0 ; arr[i] != 0; i++)
	{
		
		counter++;
		
		
	}

	printf("Length of string : %d" , counter);
	
	return 0;
}

