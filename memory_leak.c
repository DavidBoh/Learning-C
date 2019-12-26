#include <stdio.h>
#include <stdlib.h>

int main() //version  con leak fixed
{
	char * p = NULL ; // debemos darle el valor NULL al puntero

	for ( int i = 0; i < 10; i++ ) {
		printf( "%d - Alocando 50 bytes\n", i );
		if ( p ) { //antes de hacer el malloc, si p esta libre, debemos liberar p
			free( p );
		}
		p = malloc( sizeof(char) * 50 );
	}

	printf( "Terminado!\n" );
	free( p ); //al final de todo el proceso, liberar todo para evitar leaks = 0 leaks

}
