#include <stdio.h>
int main(){
	int num1,num2;
	
	printf("Escriba dos numeros: \n");
	scanf("%d %d",&num1,&num2);
	
	num1==num2 ? printf("\nSon numeros iguales") : printf("\nSon numeros diferentes");
	
	return 0;
}
