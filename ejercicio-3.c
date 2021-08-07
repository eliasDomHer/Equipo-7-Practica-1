#include <stdio.h>

//Inicio función main
int main()
{
  printf("Caja:\n");

  //La variable "i" controla el recorrido vertical
  for (int i = 0; i < 9; i++) {

    //La variable "j" controla el recorrido horizontal
    for (int j = 0; j < 9; j++) {

      //"i == 1 || i == 9" significa que se encuentra al principio o final del recorrido
      //"j == 1 || j == 9" significa que se encuentra al principio o final del recorrido horizontal
      if (i == 0 || i == 8 || j == 0 || j == 8) {

        //Se imprimirá un asterisco siempre que se encuentre al principio o al final del recorrido ya sea vertical u horizontal. De lo contrario se imprimirá un espacio en blanco
        printf("*");
      }
      else {
        printf(" ");
      }
    }
    printf("\n");
  }

  printf("\tÓvalo:\n");

  for (int i = 0; i < 9; i++) {
     printf("\t");
    for (int j = 0; j < 9; j++) {

      //"i == 0 || i == 8" significa que se encuentra al principio o final del recorrido 
      //"j == 3 || j == 4 || j == 5" significa que se encuentra a la mitad del recorrido horizontal
      //Ponemos el operador AND para que se imprima un asterisco sólo si se cumplen ambas condiciones
      if ((i == 0 || i == 8) && (j == 3 || j == 4 || j == 5)) {
        printf("*");

        //Lo mismo que el condicional anterior sólo que elegimos la posición segunda y penúltima tanto en "i" como en "j" para imprimir el asterisco
      } else if ((i == 1 || i == 7) && (j == 1 || j == 7)) {
        printf("*");

        //Colocamos a "i" en un intervalo para que sólo imprima asteriscos en los extremos horizaontales al estar fuera del recorrido vertical entre 1, 2 y 8, 9
      } else if ((i < 7 && i > 1) && (j == 0 || j == 8)) {
        printf("*");
      } else {
        //Si no se cumple nada de lo anterior, imprimimos espacios en blanco
        printf(" ");
      }
    }
    printf("\n");
  }
  
  printf("\t\tFlecha:\n");

  for (int i = 0; i < 9; i++) {
    printf("\t\t");
    for (int j = 0; j < 9; j++) {
      //Cuando nos encontramos en los extremos verticales y horizaontalmente en medio, colocamos un asterisco
      if ((i == 0 || i == 8) && j == 4) {
        printf("*");

        //Cuando estamos en la segunda posición verticalmente y estemos en las 3 posiciones horizontales de en medio, colocamos asteriscos
      } else if (i == 1 && (j == 3 || j == 4 || j == 5)) {
        printf("*");

        //Cuando estamos en la tercera posición verticalmente y estemos en las 5 posiciones horizontales de en medio, colocamos asteriscos
      } else if (i == 2 && (2 <= j && j <= 6)) {
        printf("*");

        //Cuando estemos en un intervalo de la cuarta posición a la penúltima, y en la posición de en medio horizontalmente, colocamos asterisco
      } else if ((i <= 7 && 3 <= i) && j == 4) {
        printf("*");
      } else {
        //Si no se cumple ninguna de las anteriores condiciones, colocamos espacios en blanco
        printf(" ");
      }
    }
    printf("\n");
  }
  
  printf("\t\t\tDiamante:\n");
  //Variables para el diamante
  int cont1 = 4, cont2 = 4;

  for (int i = 0; i < 9; i++) {
    printf("\t\t\t");
    for (int j = 0; j < 9; j++) {
      //El recorrido horizontal sólo imprimirá un asterisco cuando sea equivalente a lo contenido en los contadores
      if (cont1 == j || cont2 == j) {
        printf("*");
      } else {
        //Si la variable j no es igual a lo contenido dentro de los contadores, entonces imprimirá un espacio en blanco
        printf(" ");
      }
    }
    //Abrimos un condicional donde i sea menor o igual a 3 para que nuestros contadores crezcan o decrezcan, dependiendo el contador
    if (i <= 3) {
    cont1--;
    cont2++;
    }
    //Una vez llegando a la mitad del diamante, haremos crecer y decrecer inversamente a nuestros contadores para así terminar de dibujar el diamante correctamente
    if (i >= 4) {
      cont1++;
      cont2--;
    }
    printf("\n");
  }

  //Cada "printf("\n")" es para poner un salto de linea entre cada recorrido de "i"

  return 0;
}
