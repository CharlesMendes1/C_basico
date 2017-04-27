#include <stdio.h>
#include <stdlib.h>
	int main (){
	float raio,h,vol;
		printf("Digite o raio da lata de oleo\n");
		scanf("%f",&raio);
		printf("Digite o altura da lata de oleo\n");
		scanf("%f",&h);
		vol = 3.14 * (raio * raio) * h;
		printf("o volume do oleo e´: %f\n",vol);
		return 0;
}
