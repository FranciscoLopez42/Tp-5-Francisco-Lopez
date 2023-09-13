#include <stdio.h>
#include <stdlib.h>

int nota(int*notas){
	int i=0,mayor=0,menor=0;
	for(i=1;i<16;i++){
		printf("Ingrese la nota %d: ",i);
		scanf("%d",&notas[i]);
		if(notas[i]>8){
			mayor=mayor+1;
		}
		else{
			menor=menor+1;
		}
	}
	printf("Notas mayores a 8: %d\n",mayor);
	printf("Notas menores a 8: %d\n",menor);
}

int main(){
	int notas[15];
	
	nota(notas);
	system("pause");
	return 0;
}
