#include <stdio.h>
int mensagem () /* Funcao simples: so imprime Ola! */
{
printf ("Ola! \n");
return(0);
}

int conta()
{
int a=50 , b=30, c;
c = a * b ;
printf("Resultado da conta = %d\n",c);
return 0;
}

int main ()
{
mensagem();
conta();
printf ("Eu estou vivo!\n");
return(0);
}
