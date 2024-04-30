#include <stdio.h>

void cambiar_valores(int *val1, int *val2);

int main(){
	
	int n1, n2;
	
	printf("Ingrese dos valores\n");
	printf("Valor 1: ");
		scanf("%d", &n1);
	printf("Valor 2: ");
		scanf("%d", &n2);
	
	printf("\nEl valor 1 antes del cambio es: %d\n", n1);
	printf("El valor 2 antes del cambio es: %d\n",n2);
	cambiar_valores(&n1,&n2);
	printf("\nEl valor 1 despues del cambio es: %d\n", n1);
	printf("El valor 2 despues del cambio es: %d",n2);
	
	return 0;
}

cambiar_valores(int *val1,int *val2){
	int aux=0;
	aux = *val1;
	*val1 = *val2;
	*val2 = aux;
}
