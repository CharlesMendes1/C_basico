
#include <stdio.h>

int quadrado_do_amor(int *x,int z){
int quadrado;
quadrado = *x+z *2;
return quadrado;
}

int main(){
int i,*c,a;
i = 9;
c = &i;/*c esta pegando endere�o de memoria de [i] para apontar*/

printf("valor de i : %d\n",i);
printf("endere�o de i: %p\n",i);

printf("valor de c : %d\n",*c);
printf("endere�o de c: %d\n",c);

a = *c + i *2;
printf("valor de a : %d\n",a);
printf("endere�o de a: %p\n",a);

int v;
v = quadrado_do_amor(&a,i);
printf("valor de v : %d\n",v);
printf("endere�o de v: %p\n",v);
return 0;
}