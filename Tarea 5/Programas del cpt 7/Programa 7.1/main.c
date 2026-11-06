#include <stdio.h>

/* Funciones para el manejo de caracteres de la biblioteca stdio.h */

void main(void)
{
    char p1, p2, p3 = '$';
    /* Declaración de las variables tipo carácter p1, p2 y p3. Observa que a p3 se le
    asigna el símbolo $. */
    printf("\nIngrese un carácter: ");
    p1 = getchar();             /* Se utiliza la función getchar para leer un carácter. */
    putchar(p1);                /* Se utiliza la función putchar para escribir un
    carácter. */
    printf("\n");
    fflush(stdin);
    /* Luego de leer un carácter siempre es conveniente escribir la función fflush
    para limpiar el búfer, porque generalmente queda con basura y genera un error
    en la ejecución del programa. El error se produce porque cuando se ingresa un
    dato se oprime el return y luego cuando volvemos a leer un carácter o una
    cadena de caracteres se toma a ese return como el nuevo dato ingresado. */

    printf("\nEl carácter p3 es: ");
    putchar(p3);
    /* Se utiliza la función putchar para escribir el carácter almacenado en p3. */
    printf("\n");

    printf("\nIngrese otro carácter: ");
    fflush(stdin);
    scanf("%c", &p2);
    /* Se puede utilizar scanf con el formato de variable %c para leer un carácter. */
    printf("%c", p2);
    /* Se puede utilizar printf con el formato de variable %c para escribir un
    carácter. */
}
