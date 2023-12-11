#include <stdio.h>

int main() {

int i = 0;

switch(i)
{
	
	case 0: i+=2;
	case 1: i=0;
	default: i += 10;
}

printf("%d" , i);



return 0;
}

