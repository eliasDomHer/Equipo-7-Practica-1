#include <stdio.h>

//Inicio función main
int main()
{
  //Declaración de variables
  int num1, num2, suma = 0, prod = 0;
  float div;

  //Lectura de datos
  printf("Digite un número:  ");
  scanf("%d", &num1);
  printf("Digite un número:  ");
  scanf("%d", &num2);

  //Realización de operaciones 
  suma = num1 + num2;
  prod = num1 * num2;
  div = num1 / (float)num2;

  //Impresión del resultado
  printf("\n- - - Resultados - - -\n\tSuma: %d\n\tMultiplicación: %d\n\tDivisión: %.2f", suma, prod, div);

  return 0;
}
