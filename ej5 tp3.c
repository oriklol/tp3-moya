#include <stdio.h>
#include <string.h>

char* CONCAT(const char *string1,const char *string2);

int main(){
	
	int size=0;
	
	int i=0;
	
	char string1[100], string2[100];
	
	int res;
	
	printf("Ingrese la primer cadena: ");
		scanf("%s", &string1);
		
	printf("Ingrese la segunda cadena: ");
		scanf("%s", &string2);
	
	printf("%s",CONCAT(string1,string2));
	
	return 0;
	
}

char* CONCAT(const char *string1,const char *string2){
	int i=0;
	char *res;

	strcpy(res, string1);
	
	strcat(res, string2);
	
	return res;

}
