/* Ponteiros para estruturas*/
# include <stdio.h>

struct est {
 int x;
 char y;
};

int main( void) {
    struct est *p, var;
    p = & var;
    printf ("x vale: %i\n",var.x);
    printf ("x vale: %i\n",p->x);
    printf ("x vale: %i\n",(*p).x);
}
