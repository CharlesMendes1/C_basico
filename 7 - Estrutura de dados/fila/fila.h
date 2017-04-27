typedef struct fila Fila;
//criar uma estrutura de fila
Fila* cria_fila (int n);
//inserir um elemento no fim
void enfileira (Fila* f, float v);
//retirar o elemento do início
float desenfileira (Fila* f);
//Pega o elemento do inicio da fila sem desenfileirar
float frente (Fila* f);
// verificar se a fila está vazia
int fila_vazia (Fila* f);
//liberar a fila
void libera_fila (Fila* f);
