#include <stdio.h>

void mostrar_arr();
int contar_ocurrencias();



int main() {
    int arreglo[] = {1, 2, 3, 4, 2, 2, 3, 5, 2};
    int tamanio = sizeof(arreglo) / sizeof(arreglo[0]);
    int elemento;
    
    
    printf("El vector tiene estos valores: ");
    mostrar_arr(tamanio, arreglo);
    
    printf("\nQue elemento quiere contar en el vector: ");
    	scanf("%d", &elemento);
    
    int ocurrencias = contar_ocurrencias(arreglo, tamanio, elemento);
    
    printf("\nEl elemento %d aparece %d veces en el arreglo.\n", elemento, ocurrencias);

    return 0;
}

int contar_ocurrencias(int *arr, int size, int elemento){
    int contador = 0;
    int i = 0;

    for(i = 0; i < size; i++){
        if (*(arr + i) == elemento) {
            contador++;
        }
    }
    return contador;
}

void mostrar_arr(int size, int *arr){
	int i=0;	
	for(i=0;i<size;i++){
		if(i==size-1){
			printf("%d", *(arr+i));
		}
		else{
			printf("%d, ", *(arr+i));
		}
		
	}
	
}

