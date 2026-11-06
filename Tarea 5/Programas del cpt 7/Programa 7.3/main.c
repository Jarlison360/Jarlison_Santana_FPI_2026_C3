#include <stdio.h>

/* Programa que ilustra el uso de diversas funciones de la biblioteca stdio.h
   para la lectura, escritura y manipulación de cadenas de caracteres. */

void main(void)
{
    char *cad0 = "Buenos días";
    /* Asignación de una cadena a través de un puntero, el cual apunta
       a la posición de memoria de los caracteres seguidos de '\0'. */

    char cad1[20] = "Hola";
    /* Arreglo de caracteres con tamaño estático de 20 posiciones. */

    char cad2[] = "México";
    /* Arreglo de tamaño implícito que se ajusta exactamente al texto asignado. */

    char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'};
    /* Asignación manual de valores carácter por carácter, incluyendo el terminador. */

    char cad4[20], cad5[20], cad6[20];

    printf("\nLa cadena cad0 es: ");
    puts(cad0);
    /* puts escribe la cadena en pantalla e inserta un salto de línea automático. */

    printf("\nLa cadena cad1 es: ");
    printf("%s", cad1);

    printf("\nLa cadena cad2 es: ");
    puts(cad2);
    printf("\nLa cadena cad3 es: ");
    puts(cad3);

    printf("\nIngrese una línea de texto (lectura mediante gets): \n");
    gets(cad4);
    printf("\nLa cadena cad4 es: ");
    puts(cad4);
    fflush(stdin);

    printf("\nIngrese una línea de texto (lectura mediante scanf): \n");
    scanf("%s", cad5);
    /* scanf con el modificador %s solo captura la primera palabra si hay espacios. */
    printf("\nLa cadena cad5 es: ");
    printf("%s", cad5);
    fflush(stdin);

    char p;
    int i = 0;

    printf("\nIngrese una línea de texto carácter por carácter (con getchar): \n");
    /* Lectura iterativa mediante getchar hasta detectar el salto de línea. */
    while ((p = getchar()) != '\n')
    {
        cad6[i++] = p;
    }
    cad6[i] = '\0'; /* Incorporación manual del carácter de fin de cadena. */

    printf("\nLa cadena cad6 es: ");
    puts(cad6);
}
