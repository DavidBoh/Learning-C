#include <stdio.h>

int main()
{
	int number=203; 
	int * pointToNumber = &number;

	printf("%p, %d\n",pointToNumber, *pointToNumber);

}
