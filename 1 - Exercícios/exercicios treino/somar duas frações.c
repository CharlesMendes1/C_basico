#include <stdio.h>
int main(){
	int num1,den1,num2,den2,num,den;
	printf("Digite os termos das fraçoes\n");
	scanf("%d %d %d", &num1,&den1,&num2,&den2);
	num = num1*den2+num2*den1;
	den = den1*den2;
	printf("(%.1d/%.1d)+(%.1d/%.1d)=(%.1d/%.1d)",num1,den1,num2,den2,num,den);
	return 0 ;
}
