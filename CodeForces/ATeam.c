#include <stdio.h>
#include <stdlib.h>

int main(){
	int C,P,V,T;
	int i;
	int cont = 0;
	
	scanf("%d",&C);
	
	for(i=0;i<C;i++){
		scanf("%d %d %d",&P,&V,&T);
		
		if((P==0 && V==0)||(P==0 && T==0)||(V==0 && T== 0)){
			
		}else{
			cont ++;
		}
	}
	
	printf("%d",cont);
	
return 0;	
}
