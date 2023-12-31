#include <stdio.h>

int Prime_Numbers(int number);

int main(void)
{
	int a , b;
	
	printf("Enter two numbers(Intervals) : ");
	scanf("%d %d",&a,&b);
	
for(unsigned char i = a+1 ; i<b ; i++)
	{	
	
	 if(Prime_Numbers(i))
	 {
		 printf("%d \t",i);
		 
	 }
	}

  return 0;	
}

int Prime_Numbers(int number)
{
	
		for(unsigned char i = 2 ; i <= number/2 ; i++)
			{
				if(number % i == 0)
				{	
					return 0;
				}
	
			}
			
	return 1;

	
	
}