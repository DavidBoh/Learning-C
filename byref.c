#include <stdio.h>

void duplicate( int * a)
{
	*a *= 2;

}

int main()
{
	int a=5;

	printf("Antes de duplicar a= %d\n",a);
	duplicate(&a);
	printf("Despues de duplicar a= %d\n",a);
}
