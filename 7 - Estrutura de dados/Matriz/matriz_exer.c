
#include <stdio.h>
#include <stdlib.h>
#include "matriz_exer.h"

struct matriz{
	int lin;
	int col;
	float **v;
};


Matriz *cria(int m, int n){
	int i;
	
	Matriz *mat = (Matriz*)malloc(sizeof(Matriz));
	if (mat == NULL){
  		printf("Memoria insuficiente!\n");
		exit(1) ;
	}
	
	mat->lin = m;
	mat->col = n;
	

	i=0;
	mat->v=(float**)malloc(m * sizeof(float));
		
	for(i=0;i<m;i++){
        mat->v[i] =(float*)malloc(n * sizeof(float));
    }

	return mat;
}


void insere(Matriz *mat,int i ,int j ,float v){
	if (i<0 || i>= mat->lin || j<0 || j>=mat->col){
        printf (" Atribuicao invalida !\n ");
        exit (1);
	}
	mat->v[i][j] = v;
}

int linhas(Matriz *mat){
	return mat->lin;
}

int colunas(Matriz *mat){
	return mat->col;
}

float acessa(Matriz *mat,int i,int j) {
	if (i <0 || i >= mat->lin || j <0 || j >= mat->col) {
        printf("Acesso invalido !\n");
        exit(1);
	}
	return mat->v[i][j];
}

void imprime(Matriz *mat){
	int i,j;
	for(i=0;i<mat->lin;i++){
		for(j=0;j<mat->col;j++){
			printf("%.1f  ",acessa(mat,i,j));
		}
			printf("\n");
	}
}


void libera(Matriz *mat){
    int i;
    for (i=0;i<mat->lin;i++)
    	free(mat->v[i]);
    free(mat->v);
    free(mat);
 }

