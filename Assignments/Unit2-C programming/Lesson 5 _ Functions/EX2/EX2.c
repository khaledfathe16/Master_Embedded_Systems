#include <stdio.h>

int factorial(int num);
int main(void)
{
	int Number,s;
	
	printf("Please enter a number : ");
	scanf("%d",&Number);
	s = factorial(Number);
	printf("Factorial = %d",s);
  return 0;	
}

int factorial(int num)
{
	
	
	if(num == 0)
	{
		return 1;
	}
	
	return num * factorial(num-1);
	
	
}