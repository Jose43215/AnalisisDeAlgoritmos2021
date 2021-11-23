#include <iostream>
#include <cstdlib>
#include <conio.h>

//declaramos los arreglos globales
int **puntero_matrizA,**puntero_matrizB,**puntero_matrizC;

//Metodo para visualizar arreglos
void mostrar(int **,int);

//metodo para obtener c
void formaC(int,int,int,int,int,int,int);

int main(){
	int n=2;
	int i, j, k;
    int S1, S2, S3, S4, S5, S6, S7, S8, S9, S10,P1, P2, P3, P4, P5, P6, P7;
    
	//Reservar memoria:
	puntero_matrizA = new int*[n]; //reservando memoria para fila
	for(i=1;i<=n;i++){
		puntero_matrizA[i]= new int[n];//reservando memoria de columnas
	}
	
	puntero_matrizB = new int*[n]; //reservando memoria para fila
	for(i=1;i<=n;i++){
		puntero_matrizB[i]= new int[n];//reservando memoria de columnas
	}
	
	puntero_matrizC = new int*[n]; //reservando memoria para fila
	for(i=1;i<=n;i++){
		puntero_matrizC[i]= new int[n];//reservando memoria de columnas
	}
	
	
	//Llenar
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			puntero_matrizA[i][j]=rand()%11;
			puntero_matrizB[i][j]=rand()%11;
		}
	}
	
	mostrar(puntero_matrizA,n);
	printf("\n");
	mostrar(puntero_matrizB,n);
	
	
	//Empezamos operaciones con matrices
	S1=puntero_matrizB[1][2]-puntero_matrizB[2][2];
    S2=puntero_matrizA[1][1]+puntero_matrizA[1][2];
    S3=puntero_matrizA[2][1]+puntero_matrizA[2][2];
    S4=puntero_matrizB[2][1]-puntero_matrizB[1][1];
    S5=puntero_matrizA[1][1]+puntero_matrizA[2][2];
    S6=puntero_matrizB[1][1]+puntero_matrizB[2][2];
    S7=puntero_matrizA[1][2]-puntero_matrizA[2][2];
    S8=puntero_matrizB[2][1]+puntero_matrizB[2][2];
    S9=puntero_matrizA[1][1]-puntero_matrizA[2][1];
    S10=puntero_matrizB[1][1]+puntero_matrizB[1][2];
	
	//Ahora hacemos el calculo de las P
	P1=puntero_matrizA[1][1]*S1;
    P2=puntero_matrizB[2][2]*S2;
    P3=puntero_matrizB[1][1]*S3;
    P4=puntero_matrizA[2][2]*S4;
    P5=S5*S6;
    P6=S7*S8;
    P7=S9*S10;
    
    formaC(P1,P2,P3,P4,P5,P6,P7);

return 0;
}

void mostrar(int **puntero_matriz,int n){
	int i,j;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d,",puntero_matriz[i][j]);
		}
		printf("\n");
	}
}

void formaC(int P1, int P2, int P3 , int P4, int P5, int P6, int P7){
	puntero_matrizC[1][1]=P5+P4-P2+P6;
    puntero_matrizC[1][2]=P1+P2;
    puntero_matrizC[2][1]=P3+P4;
    puntero_matrizC[2][2]=P5+P1-P3-P7;
    
    printf("\n");
    mostrar(puntero_matrizC,2);
}
