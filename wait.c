#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>

int main( int argc, const char * argv[] )
{
	int pid = fork();

	if ( pid ) {
		printf("Soy el P padre. My PID is %d and your PID is %d\n", getpid(), pid);
		wait(NULL);
		printf("Soy tu padre nuevamente\n");
	} else {
		printf("Soy el hijo. Mi PID es %d\n", getpid() );
		sleep(2);
	}

	

	return 0;

}
