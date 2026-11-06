#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Cuenta palabras.
El programa calcula el número de palabras que hay en la cadena de caracteres.[cite: 16] */

int cuentap(char *);    /* Prototipo de función.[cite: 16] */

int main(void)
{
    int i;
    char fra[50];
    printf("\nIngrese la línea de texto: ");
    gets(fra);
    strcat(fra, " ");       /* Se agrega un espacio en blanco al final de la cadena.[cite: 16] */
    i = cuentap(fra);
    printf("\nLa línea de texto tiene %d palabras", i);
    return 0;
}

int cuentap(char *cad)
{
    /* La función cuenta el número de palabras que hay en la cadena de caracteres.[cite: 16] */
    char *cad0;
    int i = 0;
    cad0 = strstr(cad, " ");    /* Se localiza el primer espacio en blanco en la cadena.[cite: 16] */
    while (strcmp(cad, " "))
    {
        strcpy(cad, cad0);
        i++;
        cad0 = strstr (cad + 1, " ");
        /* Se busca un espacio en blanco a partir de la siguiente posición.[cite: 16] */
    }
    return (i);
}
