#include <stdio.h>

/* Prototipos de funciones. */
void trueque(int *x, int *y);
int suma(int x);

int main(void)
{
    int a = 10, b = 20;
    int numero = 5;

    printf("--- Prueba de trueque (Intercambio) ---");
    printf("\nAntes: a = %d, b = %d", a, b);
    trueque(&a, &b); /* Se pasan las direcciones de memoria */
    printf("\nDespues: a = %d, b = %d\n", a, b);

    printf("\n--- Prueba de suma (Cuadrado) ---");
    printf("\nEl cuadrado de %d es: %d\n", numero, suma(numero));

    return 0;
}

/* La funcion trueque intercambia los valores de dos variables
   pasadas por referencia utilizando punteros. */
void trueque(int *x, int *y)
{
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
}

/* Nota: A pesar de llamarse 'suma', esta funcion matematicamente
   calcula y retorna el cuadrado del numero recibido. */
int suma(int x)
{
    return (x * x);
}

