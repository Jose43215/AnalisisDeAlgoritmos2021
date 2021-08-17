#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int numnumeros;
	int numeros[10000];
	int numero;
	int aux;
	int i;
	int j;
	
	printf("Escriba la cantidad de numeros que desea ordenar\n");
	scanf("%d",&numnumeros);
	
	printf("Los numerosa ordenar son: \n");
	for(i=0;i<numnumeros;i++){
		numero = rand() %11;
		numeros[i]=numero;
		printf(" %d ",numeros[i]);
	}
	
	for(i=0;i<(numnumeros-1);i++){
		for(j=i+1;j<numnumeros;j++){
			if(numeros[j]<numeros[i]){
				aux = numeros[j];
				numeros[j]=numeros[i];
				numeros[i]=aux;
			}
		}
	}
	
	printf("\n\nOrdenamiento de numeros:\n");
	for(i=0;i<numnumeros;i++){
		printf(" %d ",numeros[i]);
	}

return 0;
}
