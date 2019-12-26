#include <stdio.h>
#include <string.h>

int main()
{
	char * source = "Mauro";
	char destiny[20] = "No verás esto nunca";

	strcpy(destiny, source);
	printf("destiny = %s\n", destiny );

	return 0;

}
