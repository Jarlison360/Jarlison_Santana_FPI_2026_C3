#include <stdio.h>
#include <string.h>

/* Hospital.
El programa genera información acerca de los pacientes de un hospital. */

typedef struct     /* Declaración de la estructura domicilio. */
{
    char cal[20];   /* Calle. */
    int num;        /* Número. */
    char col[20];   /* Colonia. */
    char cp[5];     /* Código Postal. */
    char ciu[20];   /* Ciudad. */
} domicilio;

typedef struct     /* Declaración de la estructura paciente. */
{
    char nom[20];   /* Nombre y apellido. */
    int edad;
    char sexo;
    int con;        /* Condición. */
    domicilio dom;  /* Observa que el campo dom es de tipo estructura domicilio. */
    char tel[10];   /* Teléfono. */
} paciente;

void Lectura(paciente *, int);
void F1(paciente *, int);
void F2(paciente *, int);     /* Prototipos de funciones. */
void F3(paciente *, int);

int main(void)
{
    paciente HOSPITAL[100];    /* Arreglo unidimensional de tipo estructura paciente. */
}
