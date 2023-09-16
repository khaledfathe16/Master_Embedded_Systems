#include <stdio.h>

#include <string.h>

//#include <stdlib.h>
//#include <conio.h>

int main()
{
	
	char arr[100];

	printf("Enter the string  : ");
	
	scanf("%s",arr);
	
	printf("Reverse string is : ");
	
	for(int i = strlen(arr)-1 ; i>=0 ; --i)
	{
		
	printf("%c" , arr[i]);	
		
		
	}

	return 0;
}

