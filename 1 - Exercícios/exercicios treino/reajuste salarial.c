#include<stdio.h>
int main (){
float salario,reajus,res;
printf("Digite o seu salario\n");
scanf("%f",&salario);
res = salario * 15 / 100;
reajus = res + salario;
printf("salario anterior = %.2f \n salario com reajuste = %.2f ",salario,reajus);
return 0 ;}
