//trocar valores de duas variaveis
#include<stdio.h>
int main(){
int a,b; // com apenas duas variaveis
printf("Digite dois valores\n");
scanf("%d%d",&a,&b);
a = a + b;
b = a - b;
a = a - b;
printf("Valor inteiro e´ = 1° %d e 2° %d",a,b);
return 0;
}
