#include <stdio.h>
#include <stdlib.h>

int sueldos(int*sueldo){
	int mayor=0,menor=0,i;
	for(i=1;i<=20;i++){
		printf("Ingrese el sueldo %d: ",i);
		scanf("%d",&sueldo[i]);
		if(sueldo[i]>2000){
			mayor=mayor+1;
		} else
		   menor=menor+1;
	}
	printf("Los sueldos que sean mayores a 2000 son: %d \n", mayor);
	printf("Los sueldos que sean menores a 2000 son: %d \n", menor);
}

int main(){
	int sueldo[21];
	
	sueldos(sueldo);
	
	system("pause");
	return 0;
}
