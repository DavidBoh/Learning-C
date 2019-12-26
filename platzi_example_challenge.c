#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]){
	char longest_str[50];
	strcpy(longest_str, argv[1]);

	for(int i = 2; i < argc; i++){
		if(strlen(longest_str) < strlen(argv[i])){
			strcpy(longest_str, argv[i]);
		}
	}

	printf("The biggest string is: %s", longest_str);
	return 0;
}
