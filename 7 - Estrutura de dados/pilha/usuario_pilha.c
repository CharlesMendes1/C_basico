#include<stdio.h>
#include"pilha.h"

int main (void) {
	Pilha *p;
	int n = 10;
	
	p = cria(n);
	
	push(p,5);
	push(p,10);
	push(p,2);
	printf("%.1f \n",pop(p));
	push(p,3);
	push(p,7);
	push(p,9);
	
	libera(p);
	return 0;
}
