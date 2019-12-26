#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char NAME[100];
typedef char EMAIL[100];

typedef struct {
	NAME name;
	EMAIL email;
} CONTACT;

int main(int argc, const char * argv[])
{
	CONTACT * list = NULL;//puntero vacio
	char buffer[100];
	int goOn, listSize = 0;

	do {
		printf( "Ingrese el nombre del nuevo contacto (0 para terminar:)\n " );
		scanf( "%99s", buffer );//aseguramos que solamente sean cien chars
		if ( strcmp( "0", buffer ) != 0 ){// saber si se ingreso un cero, comparar el buffer con cero, si es distinto a cero, hazlo
			if ( !list ) { //si la lista no tiene elemento, reserva memoria para la lista
				list = malloc( sizeof( CONTACT ) );//reservo tanta memoria como sea necesaria para contact
			}else {//si la lista ya tenia elementos, entonces realoc
				list = realloc( list, sizeof( CONTACT ) * ( listSize + 1 )  );// listsize + 1 para conservar datos previos
			}
			strcpy( list[ listSize ].name, buffer ); //guardar ingresado en el buffer en listsize
			printf( "Ingrese el email de %s:\n", buffer );
			scanf( "%99s", buffer);
			strcpy( list[ listSize ].email, buffer);
			goOn = 1;//goOn es verdadero "set bool true" 
			listSize++;//si no incrementamos tamaño de lista, no funciona
		} else {
			goOn = 0;//goOn pasa a ser falso, se acaba el do while
		}
	}while ( goOn );//mientras goOn sea verdadero, sigue añadiendo contactos

	printf("\n Esta es tu lista de contactos:\n" );

	printf("Nombre\t\tEmail\n");
	for ( int i = 0; i < listSize; i++ ) {
		printf( "%s\t\t\%s\n", list[i].name, list[i].email );
	}

	free( list );//nos permite evitar un memory leak
	return 0;
}
