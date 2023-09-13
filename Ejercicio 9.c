#include <stdio.h>
#include <stdlib.h>

int numeros(int n){
	printf("Ingrese la cantidad de n�meros: ");
	scanf("%d", &n);
	if (n <= 0) {
		printf("La cantidad de n�meros debe ser mayor que cero.\n");
		return 1;
	}
	int numeros[n];
	printf("Ingrese los n�meros uno por uno:\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &numeros[i]);
	}
	int suma = numeros[0] + numeros[n - 1];
	if (numeros[0] < numeros[n - 1]) { 
		printf("Los n�meros fueron ingresados de forma ascendente.\n");
	} else if (numeros[0] > numeros[n - 1]) {
		printf("Los n�meros fueron ingresados de forma descendente.\n");
	} else {
		printf("Los n�meros fueron ingresados de forma desordenada.\n");
	}
	printf("La suma entre el primer y el �ltimo n�mero es: %d\n", suma);
}
int main() {
	int n;
	
	numeros(n);
	
	system("pause");
	return 0;
}
