#include<stdio.h>
#include<stdlib.h>
#include "fila.h"

int incrementa(int i, int n) {
	if (i == n-1)
		return 0;
	else
		return i+1;
}

struct fila {
	int inicio, fim;
	int capacidade;
	float *itens;
};

Fila* cria_fila (int n) {
	Fila* f = (Fila*) malloc(sizeof(Fila));
	f->inicio = f->fim = 0; /* inicializa fila vazia */
	f->capacidade = n;
	
	f->itens = (float *) malloc(n * sizeof(float));
	return f;
}

void enfileira (Fila* f, float v) {
	if (incrementa(f->fim, f->capacidade) == f->inicio) {
		printf("Capacidade da fila estourou.\n");
		exit(1); /* aborta programa */
	}
	/* insere elemento na proxima posicao livre */
	f->itens[f->fim] = v;
	f->fim = incrementa(f->fim, f->capacidade);
}

float desenfileira (Fila* f) {
	float v;
	if (fila_vazia(f)) {
		printf("Fila vazia.\n");
		exit(1); /* aborta programa */
	}
	/* retira elemento do inicio */
	v = f->itens[f->inicio];
	f->inicio = incrementa(f->inicio, f->capacidade);
	return v;
}

int fila_vazia (Fila* f){
	return (f->inicio == f->fim);
}

void libera_fila (Fila* f) {
	free(f->itens);
	free(f);
}
