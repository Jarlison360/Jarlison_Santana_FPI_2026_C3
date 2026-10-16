#include <stdio.h>

/* Empresa textil.
El programa, al recibir commod atos decisivos la categoria y antiguedad de
un empleado, determina si el mismo reune las condiciones establecidad por
la empresa para ocpupar un nuevo cargo en una sucursal.

CLAT, CAT, ANT, RES: variables de tipo entero.
SAL: variables de tipo real. */

void main(void)
{
int CLA, CAT, ANT, RES;
printf("\nIngrese la clave, categoria y antiguedad del trabajdor:");
scanf("%d %d %d", &CLA, &CAT, &ANT);
switch(CAT)
{
   case 3:
   case 4: if (ANT >= 5)
               RES =  1;
             else
                   RES = 0;
             break;
    case 2: if (ANT >=7)

                    RES = 1;
              else
                    RES = 0;
              break;
    default: RES = 0;
              break;
}
if (RES)
      printf("\nEl trabajador con clave %d reune las condiciones para el puesto", CLA);
else
      printf("\nEL trabajador con clave %d reune las condiciones para el puesto", CLA);
}


