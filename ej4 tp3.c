#include <stdio.h>

void copy_arr();
void mostrar_arr();

int main(){
	
	int size=0;
	
	int i=0;
	
	
	
	
	printf("Ingrese el largo del vector: ");
		scanf("%d", &size);
	
	int arr[size];
		
	int arr2[size];	
		
	for(i=0;i<size;i++){
		printf("Rellene la posicion %d: ", i+1);
			scanf("%d", &arr[i]);
	}
	
	
	printf("\n El vector original es: ");
	mostrar_arr(size, arr);
	
	copy_arr(arr,arr2,size);
	printf("\n El vector resultante es: ");
	mostrar_arr(size, arr2);

	
	return 0;
	
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

void copy_arr(int *arr, int *arr2,int size){
	int i=0;
	for(i=0;i<size;i++){
		*(arr2+i) = *(arr+i);
	}
}
