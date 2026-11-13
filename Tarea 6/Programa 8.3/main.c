#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Estructuras-3.
El programa muestra la manera en que se declara una estructura anidada, así como la
forma en que se tiene acceso a los campos de las variables de tipo estructura
tanto para lectura como para escritura. Se utilizan además funciones que
reciben como parámetros variables de tipo estructura y apuntadores de tipo estructura. */

struct direccion
{
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
};

struct empleado
{
    char nombre[20];
    char departamento[20];
    float sueldo;
    struct direccion direccion;  /* Estructura anidada como campo */
};

void Lectura(struct empleado *a);   /* Prototipo de función que recibe un apuntador */

int main(void)
{
    struct empleado e0 = {"Arturo", "Compras", 15500.75, {"San Jeronimo", 120, 3490, "Toluca"}};
    struct empleado *e1, *e2, e3, e4;
    /* Se declaran diferentes variables y apuntadores de la estructura empleado
    para que el lector pueda apreciar también las diferentes formas en que los
    campos reciben valores. */

    /* En el programa principal se leen los campos de una variable, e3, y un
    apuntador de tipo estructura, *e1. */
    e1 = (struct empleado *)malloc(sizeof(struct empleado));

    printf("\nIngrese el nombre del empleado 1: ");
    scanf("%s", e1->nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(e1->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    printf("—Ingrese la dirección del empleado—\n");
    printf("\tCalle: ");
    fflush(stdin);
    gets(e1->direccion.calle);
    printf("\tNúmero: ");
    scanf("%d", &e1->direccion.numero);
    printf("\tCódigo Postal: ");
    scanf("%d", &e1->direccion.cp);
    printf("\tLocalidad: ");
    fflush(stdin);
    gets(e1->direccion.localidad);

    printf("\nIngrese el nombre del empleado 3: ");
    scanf("%s", e3.nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(e3.departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e3.sueldo);
    printf("—Ingrese la dirección del empleado—\n");
    printf("\tCalle: ");
    fflush(stdin);
    gets(e3.direccion.calle);
    printf("\tNúmero: ");
    scanf("%d", &e3.direccion.numero);
    printf("\tCódigo Postal: ");
    scanf("%d", &e3.direccion.cp);
    printf("\tLocalidad: ");
    fflush(stdin);
    gets(e3.direccion.localidad);

    e2 = (struct empleado *)malloc(sizeof(struct empleado));
    Lectura(e2);    /* En la función Lectura se leen los campos de una variable, e4, y un apuntador de tipo estructura, *e2 */

    Lectura(&e4);

    printf("\nDatos del empleado 1\n");
    printf("%s \t %s \t %.2f \t %s \t %d \t %d \t %s",
           e1->nombre, e1->departamento, e1->sueldo,
           e1->direccion.calle, e1->direccion.numero,
           e1->direccion.cp, e1->direccion.localidad);

    printf("\n\nDatos del empleado 4\n");
    printf("%s \t %s \t %.2f \t %s \t %d \t %d \t %s",
           e4.nombre, e4.departamento, e4.sueldo,
           e4.direccion.calle, e4.direccion.numero,
           e4.direccion.cp, e4.direccion.localidad);

    return 0;
}

void Lectura(struct empleado *a)
{
    printf("\nIngrese el nombre del empleado: ");
    scanf("%s", a->nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(a->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    printf("—Ingrese la dirección del empleado—\n");
    printf("\tCalle: ");
    fflush(stdin);
    gets(a->direccion.calle);
    printf("\tNúmero: ");
    scanf("%d", &a->direccion.numero);
    printf("\tCódigo Postal: ");
    scanf("%d", &a->direccion.cp);
    printf("\tLocalidad: ");
    fflush(stdin);
    gets(a->direccion.localidad);
}
