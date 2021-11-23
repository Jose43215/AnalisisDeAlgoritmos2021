#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//declaramos variables, basandonos en el cormen
    int mA[20][20], mB[20][20],mC[100][100];
    int i, j, k, n=2;
    int S1, S2, S3, S4, S5, S6, S7, S8, S9, S10;
    int P1, P2, P3, P4, P5, P6, P7;
	
	
    for (i=1; i<=n; i++){
      for (k=1; k<=n; k++){
        printf("Ingrese el valor de (%d,%d) de Matriz A:\n",i,k);
        scanf("%d",&mA[i][k]);
      }
    }
    
    for (k=1; k<=n; k++){
      for (j=1; j<=n; j++){
        printf("Ingrese el valor de (%d,%d) de Matriz B:\n",k,j);
        scanf("%d",&mB[k][j]);
      }
    }

	//realozamos las operaciones de resta según especifica en el cormen
    S1=mB[1][2]-mB[2][2];
    S2=mA[1][1]+mA[1][2];
    S3=mA[2][1]+mA[2][2];
    S4=mB[2][1]-mB[1][1];
    S5=mA[1][1]+mA[2][2];
    S6=mB[1][1]+mB[2][2];
    S7=mA[1][2]-mA[2][2];
    S8=mB[2][1]+mB[2][2];
    S9=mA[1][1]-mA[2][1];
    S10=mB[1][1]+mB[1][2];
    
    P1=mA[1][1]*S1;
    P2=mB[2][2]*S2;
    P3=mB[1][1]*S3;
    P4=mA[2][2]*S4;
    P5=S5*S6;
    P6=S7*S8;
    P7=S9*S10;
    
    //obtenemos las posiciones y resultados en la matriz c
    mC[1][1]=P5+P4-P2+P6;
    mC[1][2]=P1+P2;
    mC[2][1]=P3+P4;
    mC[2][2]=P5+P1-P3-P7;
    
    
    printf("El resultado es:\n");
    for (i=1; i<=n; i++){
      for (j=1; j<=n; j++){
        printf(" %d ", mC[i][j]);
      }
      printf("\n");
    }
    
    return 0;
}
