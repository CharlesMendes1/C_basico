#include<stdio.h>
#include<stdlib.h>
#include"pilha.h"
struct pilha {
	int topo;
	int capacidade;
	float *elementos;
};

Pilha* cria_pilha (int n){
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	p->topo = 0; /* inicializa com zero elementos */
	p->capacidade = n;
	p->elementos = (float*) malloc(n * sizeof(float));
	return p;
}

void push (Pilha* p, float v) {
	if (p->topo == p->capacidade) {
		printf("A capacidade da pilha estourou.\n");
		exit(1); /* aborta programa */
	}
	/* insere elemento na proxima posicao livre */
	p->elementos[p->topo] = v;
	p->topo++;
}

int pilha_vazia (Pilha* p){
	return (p->topo == 0);
}

float pop (Pilha* p){
	float ultimo;
	if (pilha_vazia(p)) {
		printf("Pilha vazia.\n");
		exit(1); /* aborta programa */
	}
	/* retira elemento do topo */
	ultimo = p->elementos[p->topo-1];
	p->topo--;
	return ultimo;
}

void libera_pilha (Pilha* p){
	free(p->elementos);
	free(p);
}
