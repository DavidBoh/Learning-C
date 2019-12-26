#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[])
{
	char longest_string[100];
	strcpy(longest_string,argv[0]);

	for(int i = 0; i < argc; i++)
	{
		if(strlen(longest_string) < strlen(argv[i])){
			strcpy(longest_string, argv[i]);
		}

	}

	printf("La cadena de chars mas larga es = %s\n", longest_string);


	return 0;
}
