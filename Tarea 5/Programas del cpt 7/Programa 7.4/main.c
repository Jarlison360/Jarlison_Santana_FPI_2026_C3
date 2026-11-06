#include <stdio.h>

/* Declaración de cadenas de caracteres y asignación de valores.[cite: 16] */

void main(void)
{
    char *cad0;
    cad0 = "Argentina";       /* La declaración y la asignación son correctas.[cite: 16] */
    puts(cad0);

    cad0 = "Brasil";
    /* Correcto. Se modifica el contenido de la posición en memoria a la que apunta
    la variable cad0 —apuntador del tipo cadena de caracteres.[cite: 16] */
    puts(cad0);

    /* Nota: Los siguientes bloques muestran ejemplos incorrectos del libro y
       están comentados para permitir la compilación exitosa:

       char *cad1;
       gets(*cad1); gets(cad1);
       *//* Incorrecto. Ambas lecturas generan un error en la ejecución del programa.
       Para que un apuntador de tipo cadena de caracteres se pueda utilizar con la
       función gets, es necesario inicializarlo previamente.[cite: 16] */

    char *cad1 = "";
    /* Correcto. Primero se le asigna un valor a la posición de memoria a la que
    apunta cad1. Luego podemos modificar el contenido de esta posición de memoria
    utilizando la función gets.[cite: 16] */

    /* char cad1[]; */
    /* Incorrecto. Se genera un error en la compilación porque no se reserva
       el espacio correspondiente.[cite: 16] */

    char cad2[20] = "México";       /* Correcto.[cite: 16] */
    puts(cad2);

    /* El valor de una cadena (declarada como cadena[longitud]) se puede modificar
    por medio de lecturas o utilizando funciones de la biblioteca string.h
    (ejemplo 7.6).[cite: 16] */
    puts(cad2);

    /* cad2[10] = "Guatemala"; */
    /* Incorrecto. Se produce un error en la compilación del programa al tratar
       de asignar una cadena de caracteres al carácter 11 de la cadena.[cite: 16] */
}
