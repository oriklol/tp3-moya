#include <stdio.h>

void calcularSumaYPromedio(int *arr, int size, int *suma, float *promedio, int i) {
    *suma = 0; 
    *promedio = 0.0;

    for(i = 0; i < size; i++){
        *suma += *(arr + i); 
    }

    *promedio = (float)(*suma) / size;
}

int main() {
    int arreglo[] = {1, 10, 10};
    int size = sizeof(arreglo) / sizeof(arreglo[0]);
    int suma=0;
    int i=0;
    float promedio=0;
	printf("Los valores del vector son:\n");
	for(i=0; i<size; i++){
		printf("Posicion %d: %d\n", i+1, arreglo[i]);
	}
	calcularSumaYPromedio(arreglo, size, &suma, &promedio, i);
    printf("La suma de los elementos del arreglo es: %d\n", suma);
    printf("El promedio de los elementos del arreglo es: %.2f\n", promedio);

    return 0;
}
