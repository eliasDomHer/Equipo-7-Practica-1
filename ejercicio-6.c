#include <stdio.h>

//Inicio función main
int main()
{

  //Delcaración de variables
  float cant, cantInteres;

  //Lectura de datos
  printf("Ingrese su cantidad: ");
  scanf("%f", &cant);

  //Realización de operaciones
  cantInteres = cant + (cant * .20);

  //Impresión de resultados
  printf("Su cantidad: %.1f al serle aplicado un 20%% de interés, ahora es de: %.1f", cant, cantInteres);

  return 0;
}
