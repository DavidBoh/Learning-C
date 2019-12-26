#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>

int main( int argc, const char * argv[] )
{
	int pid = fork();
	int shared = 2;

	if ( pid ) {
		shared = 1;
		printf("Soy el P padre. My PID is %d and your PID is %d. Shared = %d\n", getpid(), pid, shared );
		wait(NULL);
		printf("Soy tu padre nuevamente. Shared = %d\n", 1 );
	} else {
		shared = 0;
		printf("Soy el hijo. Mi PID es %d. Shared = %d\n", getpid(), shared );
		sleep(2);
	}

	

	return 0;

}
