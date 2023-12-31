#include <stdio.h>


int calc(int base , int power , int i);
int main(void)
{
	int number, power;
	printf("Enter Base number = ");
	scanf("%d",&number);
	printf("Enter power number = ");
	scanf("%d",&power);		
	int i = power;
	int result;
	result = calc(number , power , i);
	
	printf(" %d ",result);
	
  return 0;	
}

int calc(int base , int power , int i)
{
	int result = base * power;
	if(i != 1)
     return result + calc(base, power , i-1);
	
	
	
	

}