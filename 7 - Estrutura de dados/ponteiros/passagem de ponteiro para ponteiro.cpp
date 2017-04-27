#include <stdio.h>
int main(){
int x = 10, y = 15, z = 0;
int *p, **q;
p = &x;
q = &p;
z = *p + **q;
printf("%d",z);	
}
