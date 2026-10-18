
#include <stdio.h>

/* Funciones y parámetros. */

int a, b, c, d;             /* Variables globales. */

int pal(int, int);          /* Prototipo de función. */

int main(void)
{
    a = 2;
    c = 3;
    d = 5;

    a = pal(c, d);
    printf("\n%d %d %d %d", a, b, c, d);

    b = 4;
    b = pal(b, a);
    printf("\n%d %d %d %d", a, b, c, d);

    return 0;
}

int pal(int x, int y)
{
    int c;                  /* Variable local c que oculta a la global c */
    b = x * y;              /* Modifica la variable global b */
    c = b + y;              /* Modifica la variable local c */
    x++;
    y = y * (y + 1);

    printf("\n%d %d %d %d", b, c, x, y);
    return (x);
}
