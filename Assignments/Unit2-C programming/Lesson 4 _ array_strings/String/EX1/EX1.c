#include <stdio.h>

//#include <stdlib.h>
//#include <conio.h>



int main()
{
	
	char arr[100];
	
	char c;
	
	int counter = 0;
	
	printf("Enter a string : ");
			
	gets(arr);
	
	printf("Enter a character to find frequency : ");
	scanf("%c", &c);
	
	
	for(int i = 0 ; i <100 ; i++)
	{
		if(arr[i] == c)
		{
			
			counter++;
			
		}
		
	}
	
	printf("Frequency of %c = %d " , c , counter);
	
	return 0;
}

