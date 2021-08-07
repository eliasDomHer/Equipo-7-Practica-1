#include <stdio.h>
int main(){
	int num1,num2,mult;
	
	printf("Escriba dos numeros: \n");
	scanf("%d %d",&num1,&num2);
	
	mult=num1%num2;
	
	if(mult==0){
		printf("El numero %d es multiplo de %d",num1,num2);
	}else{
		printf("El numero %d no es multiplo de %d",num1,num2);
	}
		
	return 0;
}
