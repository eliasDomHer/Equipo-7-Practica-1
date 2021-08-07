#include <stdio.h>
int main(){
  int hrs,mins,segs;
      
  printf("Escriba la cantidad de segundos deseada: ");
  scanf("%d",&segs);
      
  hrs=segs/3600;
  segs=segs-3600*hrs;
  mins=segs/60;
  segs=segs-60*mins;
      
  printf("\n %d horas : %d minutos : %d segundos",hrs,mins,segs);
      
  return 0;
}
