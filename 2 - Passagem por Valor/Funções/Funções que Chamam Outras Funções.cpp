#include <stdio.h>

int main(){
	float somaDeDigitos(float num1,float num2); //() o que a função vai receber , ela vai receber dois numeros "num1 e num2 "
	int a ,b,soma;
	
	printf("Digite 2 numeros: ");
	scanf("%f", &a);
	scanf("%f", &b);
	soma = somaDeDigitos(a,b); // passando os valores para fração somaDeDigitos
	
	printf("a soma eh : %f ", soma);
		
	system("pause");
	return 0;
}

float somaDeDigitos(float num1,float num2){
	float valorAbsoluto(float x); // Declarando função , Declararam a outra função que vai converter os numeros negativos
	if (num1 < 0){
		num1 = valorAbsoluto(num1); // passando valor para a função valor absoluto
	}
	
	if (num2 < 0){
		num2 = valorAbsoluto(num2); // passando valor para a função valor absoluto
	}
	
	return num1 + num2;
	
	
}

float valorAbsoluto(float x){
return x * -1 ;
}
