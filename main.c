#include <stdio.h>
#include <stdlib.h>

// Definiciones de constantes (Estilo de tu profesor)
#define SALIR 0
#define SUMAR 1
#define DIVIDIR 2
#define MULTIPLICAR 3
#define RESTAR 4

#define ERR_OK 0
#define ERR_INESPERADO 89
#define ERR_DivByZero 230

// Declaraciones de funciones
void leer_numeros(void);
int sumar(double num1, double num2, double *result);
int dividir(double numerador, double denominador, double *result);
int multiplicar(double num1, double num2, double *result); // ¡Tu función!
int restar(double num1, double num2, double *result);      // ¡Tu función!

// Variables Globales
double n1 = 0.0;
double n2 = 0.0;

int main()
{
    // Variables locales
    int menu = -1;
    int err = ERR_OK;
    double r = 0.0;

    printf("CALCULADORA\n");

    do
    {
        printf("\n\n\n0-SALIR\n1-SUMAR\n2-DIVIDIR\n3-MULTIPLICAR\n4-RESTAR\n");
        printf("Elige una opcion: ");
        scanf("%i", &menu);

        if(menu == SUMAR)
        {
            leer_numeros();
            err = sumar(n1, n2, &r);
            if(err == ERR_OK)
            {
               printf("\nLa suma de %lf mas %lf es: %lf", n1, n2, r);
            } else {
                printf("\nHa ocurrido un error!");
            }
        }

        if(menu == DIVIDIR)
        {
            leer_numeros();
            err = dividir(n1, n2, &r);
            if(err == ERR_OK)
            {
               printf("\nLa division entre %lf y %lf es: %lf", n1, n2, r);
            } else {
                if(err == ERR_DivByZero)
                {
                     printf("\nError division por cero!");
                } else {
                    printf("\nHa ocurrido un error!");
                }
            }
        }

        // --- AQUÍ EMPIEZA TU TAREA ---
        if(menu == MULTIPLICAR)
        {
            leer_numeros();
            err = multiplicar(n1, n2, &r); // Llama a tu función de multiplicar
            if(err == ERR_OK)
            {
               printf("\nLa multiplicacion de %lf por %lf es: %lf", n1, n2, r);
            } else {
                printf("\nHa ocurrido un error!");
            }
        }

        if(menu == RESTAR)
        {
            leer_numeros();
            err = restar(n1, n2, &r); // Llama a tu función de restar
            if(err == ERR_OK)
            {
               printf("\nLa resta de %lf menos %lf es: %lf", n1, n2, r);
            } else {
                printf("\nHa ocurrido un error!");
            }
        }
        // --- AQUÍ TERMINA TU TAREA ---

    } while(menu != SALIR);

    return 0;
}

// ==========================================
// DESARROLLO DE LAS FUNCIONES (Cuerpo del código)
// ==========================================

void leer_numeros(void)
{
    printf("Ingresa el primer numero: ");
    scanf("%lf", &n1);
    printf("Ingresa el segundo numero: ");
    scanf("%lf", &n2);
}

int sumar(double num1, double num2, double *result)
{
    *result = num1 + num2;
    return ERR_OK;
}

int dividir(double numerador, double denominador, double *result)
{
    if(denominador == 0.0)
    {
        return ERR_DivByZero; // Si es cero, devuelve el código de error
    }
    *result = numerador / denominador;
    return ERR_OK;
}

// LO QUE TE TOCABA A TI:
int multiplicar(double num1, double num2, double *result)
{
    *result = num1 * num2; // Multiplica usando el asterisco
    return ERR_OK;         // Avisa que todo salió bien
}

int restar(double num1, double num2, double *result)
{
    *result = num1 - num2; // Resta usando el guion
    return ERR_OK;         // Avisa que todo salió bien
}
