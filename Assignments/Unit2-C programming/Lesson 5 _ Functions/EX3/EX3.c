#include <stdio.h>


void Reverse();
int main(void)
{
	
			
	printf("Enter a sentence : ");
	
	Reverse();
	
	
			
  return 0;	
}

void Reverse()
{
	
	char c;
	
	scanf("%c",&c);
	
	if(c != '\n')
	{
		Reverse();
		printf("%c",c);
	}
	
	
	
	
}