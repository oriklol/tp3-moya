#include <stdio.h>

void encontrarMayorYMenor(int *arr, int size, int *mayor, int *menor);
int main(){
    int arreglo[] = {2, 11, 6, 3, 7}; 
    int size = sizeof(arreglo) / sizeof(arreglo[0]); 
    int mayor=0, menor=0;
    int i = 0;

    encontrarMayorYMenor(arreglo, size, &mayor, &menor);

	printf("Los valores del vector son:\n");
	for(i=0; i<size; i++){
		printf("Posicion %d: %d\n", i+1, arreglo[i]);
	}

    printf("\nEl mayor elemento del arreglo es: %d\n", mayor);
    printf("El menor elemento del arreglo es: %d\n", menor);

    return 0;
}

void encontrarMayorYMenor(int *arr, int size, int *mayor, int *menor){
	int i = 0;
	
	for(i=0; i<size; i++){
		if(i==0){
			*menor = *(arr+i);
			*mayor = *(arr+i);
		}
		else{
			if(*(arr+i)<*menor){
				*menor = *(arr+i);
			}
			if(*(arr+i)>*mayor){
				*mayor = *(arr+i);
			}
		}
	}	

}
