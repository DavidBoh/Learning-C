#include <stdio.h>
#include <string.h>

void compareChars(int argcx, char * argvx[]){
	
	

	char longest_string[100];
	strcpy(longest_string,argvx[0]);
	

	for(int i = 0; i < argcx; i++)
	{
		if(strlen(longest_string) < strlen(argvx[i])){
			strcpy(longest_string, argvx[i]);
		}

	}

	printf("La cadena de chars mas larga es = %s\n", longest_string);

}


int main(int argc, char * argv[])
{
	
	
	compareChars(argc, &argv[0]);

	


	return 0;
}
