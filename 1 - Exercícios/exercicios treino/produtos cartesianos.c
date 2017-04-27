#include <stdio.h>
 int main() {
	int n,i,j;
	printf("Digite o numero de elementos do conjunto: ");
	scanf("%d", &n);
	printf("{");
	for (i = 1;i<=n;i=i+1);
		for(j=1;j<=n;j=j+1);
			printf("(%d,%d),",i,j);
	printf("}");
	return 0;
}

