//Definicao do tipo Pilha
typedef struct pilha Pilha;
//criar uma estrutura de pilha;
Pilha* cria_pilha (int n); 
//inserir um elemento no topo (push)
void push (Pilha* p, float v);
//remover o elemento do topo (pop)
float pop (Pilha* p); 
//verifica se a pilha esta vazia
int pilha_vazia (Pilha* p); 
//liberar a estrutura de pilha
void libera_pilha (Pilha* p); 
