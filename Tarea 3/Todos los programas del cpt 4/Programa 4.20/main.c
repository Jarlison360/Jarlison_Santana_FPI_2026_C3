
#include <stdio.h>

/* Funciones y parámetros. */

int a, b, c, d;         /* Variables globales. */

void funcion1(int, int *, int *);   /* Prototipos de funciones. */
int funcion2(int *, int);

int main(void)
{
    int a;              /* Nota que a es una variable local. */
    a = 1;              /* Se asigna un valor a la variable local a. */
    b = 2;              /* Se asignan valores a las variables globales b, c y d. */
    c = 3;
    d = 4;

    printf("\n%d %d %d %d", a, b, c, d);
    a = funcion2(&a, c);
    printf("\n%d %d %d %d", a, b, c, d);

    return 0;
}

void funcion1(int r, int *b, int *c)
{
    int d;
    a = *c;             /* Observa que se hace referencia a la variable global a. */
    d = a + 3 * (*b);   /* Nota que se hace referencia a la variable local d. */

    if (r)
    {
        *b = *b + 2;
        *c = *c + 3;
        printf("\n%d %d %d %d", a, *b, *c, d);
    }
    else
    {
        *b = *b + 5;
        *c = *c + 4;
        printf("\n%d %d %d %d", a, *b, *c, d);
    }
}

int funcion2(int *d, int c)
{
    int b;
    a = 1;              /* Modifica la variable global a. */
    b = 7;              /* Modifica la variable local b. */

    funcion1(-1, d, &b);
    /* Observa que el parámetro d que enviamos a funcion1 es por referencia.
    Es equivalente escribir &*d a escribir solamente d. */

    printf("\n%d %d %d %d", a, b, c, *d);
    c += 3;
    (*d) += 2;
    printf("\n%d %d %d %d", a, b, c, *d);

    return (c);
}
