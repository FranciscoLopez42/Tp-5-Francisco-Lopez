#include <stdio.h>
#include <stdlib.h>

int nums(int*numeros, float promedio){
	int i=0, mayor=0, suma=0;
	printf("Ingresar los numeros: \n");
	for(i=0;i<5;i++){
		scanf("%d",&numeros[i]);
		suma=suma+numeros[i];
		if(numeros[i]>mayor){
			mayor=numeros[i];
		}
	}
	promedio=(float)suma/5;
	printf("El promedio de los numeros ingresados es: %f\n",promedio);
	printf("El mayor de los numeros es: %d\n",mayor);
}

int main(){
	int numeros[5], i=0, mayor=0, suma=0;
	float promedio;
	
	nums(numeros,promedio);
	
	system("pause");
	return 0;
}
