#include <stdio.h>

/* Conflicto de variables adaptado a C estándar. */

void f1(void);          /* Prototipo de función. */
int K = 5;              /* Variable global. */

int main(void)
{
    int I;
    for (I = 1; I <= 3; I++)
    {
        f1();
    }
    return 0;
}

void f1(void)
{
    int K_local = 2;    /* Se cambia el nombre para que no oculte a la global */
    K_local += K_local;

    printf("\nEl valor de la variable local es: %d", K_local);

    K = K + K_local;    /* En C, al no haber conflicto, 'K' se refiere a la global */

    printf("\nEl valor de la variable global es: %d", K);
}
