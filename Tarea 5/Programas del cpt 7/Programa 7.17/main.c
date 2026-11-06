#include <stdio.h>
#include <string.h>

/* Cadena invertida.
El programa obtiene la cadena invertida.[cite: 15] */

char * inverso(char *);     /* Prototipo de función.[cite: 15] */

void main(void)
{
    char fra[50], aux[50];
    printf("\nIngrese la línea de texto: ");
    gets(fra);
    strcpy(aux, inverso(fra));  /* Se copia a aux el resultado de la función
    inverso.[cite: 15] */
    printf("\nEscribe la línea de texto en forma inversa: ");
    puts(aux);
}

char * inverso(char *cadena)
/* La función calcula el inverso de una cadena y regresa el resultado al
programa principal.[cite: 15] */
{
    int i = 0, j, lon;
    char cad;
    lon = strlen(cadena);
    j = lon - 1;
    while (i < ((lon - 1) / 2))
    /* Observa que el reemplazo de los caracteres se debe realizar solamente
    hasta la mitad de la cadena.[cite: 15] */
    {
        cad = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = cad;
        i++;
        j--;
    }
    return (cadena);
}
