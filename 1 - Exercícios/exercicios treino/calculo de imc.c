#include <stdio.h>
int main ( ){

int id;
float pes,alt,imc;

printf("Digite sua idade: ");
scanf("%d", &id);

if(id < 10){
    printf("Categoria infantil\n");}

if (id >= 16 && id <= 20){
    printf("Adulto");}


if (id > 20){
    printf("Nao a categoria");}
else {
    if ((id >= 10) && (id <= 15)){
            printf("Categoria juvenil\n");
            printf("Peso e altura: ");
            scanf("%f%f",&pes,&alt);
            imc = pes/alt * alt;
            }

            if (imc < 10){
                    printf("Desnutrido\n");
                         }

                    if ((imc >= 10) || (imc <= 20)){
                    printf("peso normal\n");}

                    else{
                        if (imc > 20){
                        printf("sobre peso\n");}
                        }
}

return 0;
}
