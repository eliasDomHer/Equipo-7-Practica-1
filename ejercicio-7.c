#include <stdio.h>
int main(){
  int hom,muj,total;
  float por_hom,por_muj;
  
  printf("Escriba la cantidad de hombres en el grupo: ");
  scanf("%d",&hom);
  printf("\nEscriba la cantidad de mujeres en el grupo: ");
  scanf("%d",&muj);
  
  total=hom+muj;
  por_hom=(hom*100)/(float)total;
  por_muj=(muj*100)/(float)total;
  
  printf("\nEl numero total de estudiantes es: %d",total);
  printf("\nEl porcentaje total de hombres es: %.1f%%",por_hom);
  printf("\nEl porcentaje total de mujeres es: %.1f%%",por_muj);
            
  return 0;
}
