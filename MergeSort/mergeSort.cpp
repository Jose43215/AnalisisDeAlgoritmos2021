#include<iostream>

using namespace std;

void mezcla(int a[],int izquierda, int medio, int derecha){
	int* aux;
	int i,k,z;
	aux = new int[derecha-izquierda +1];
	
	i=z=izquierda;
	k = medio+1;
	
	//ordenamiento de elemntos en aux
	while(i<=medio && k<=derecha){
		if(a[i]<=a[k]){
			aux[z++] = a[i++];
		}else{
			aux[z++]=a[k++];
		}
	}
	//copiado de lementos de lista no vacia
	while(i<=medio){
		aux[z++]=a[i++];
	}
	while(k<=derecha){
		aux[z++]= a[k++];
	}
	
	//copiamos elementos de aux a a[]
	for(int i=izquierda;i<=derecha;i++){
		a[i]=aux[i];
	}
	
	delete aux;
}

void mergeSort(int a[], int primero, int ultimo){
	int central;
	
	if(primero<ultimo){
		central = (primero + ultimo)/2;
		mergeSort(a,primero,central);//ordenamos sublista izq
		mergeSort(a,central+1,ultimo);//ordenamos sublista derecha
		
		mezcla(a,primero,central,ultimo);//mezclar los elementos del arreglo ordenados
		
	}
}

int main(){
	int arreglo[]={15,20,33,14,17,89,54,99,86,24,123,87,16,3,0,1};
	mergeSort(arreglo,0,15);
	
	for(int i=0; i<16;i++){
		cout<<arreglo[i]<<endl;
	}
	
	return 0;
}
