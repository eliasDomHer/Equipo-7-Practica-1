#include <stdio.h>
int main(){
	float exam1,exam2,exam3,cal_final=0;
	printf("Escriba las calificaciones de tres examenes parciales de un alumno para sacar un calificacion final");
	printf("\n\nEscriba la calificacion del primer examen parcial: ");
	scanf("%f",&exam1);  
	printf("\nEscriba la calificacion del segundo examen parcial: ");
	scanf("%f",&exam2); 
	printf("\nEscriba la calificacion del tercer examen parcial: ");
	scanf("%f",&exam3);
	
	exam1*=0.3;
	exam2*=0.3;
	exam3*=0.4;
	cal_final=exam1+exam2+exam3;
	
	printf("\nLa calificacion final del alumno es de: %.2f",cal_final);
		
	return 0;
}
