#include<stdio.h>
#include"fila.h"

int main (void) {
	Fila *f;
	int n = 10;
	
	f = cria(n);
	
	enfileira(f,5);
	enfileira(f,2.2);
	enfileira(f,3.3);
	enfileira(f,7.4);
	enfileira(f,9.5);
	enfileira(f,2.2);
	enfileira(f,3.3);
	enfileira(f,7.4);
	enfileira(f,9.5);
	printf("%.1f\n",desenfileira(f));
	
	while(!vazia(f)){
		printf("%.1f\n",desenfileira(f));
	}
	
	libera(f);
	return 0;
}
