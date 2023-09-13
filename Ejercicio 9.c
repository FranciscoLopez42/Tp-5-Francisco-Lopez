#include <stdio.h>
#include <stdlib.h>

int numeros(int n){
	printf("Ingrese la cantidad de números: ");
	scanf("%d", &n);
	if (n <= 0) {
		printf("La cantidad de números debe ser mayor que cero.\n");
		return 1;
	}
	int numeros[n];
	printf("Ingrese los números uno por uno:\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &numeros[i]);
	}
	int suma = numeros[0] + numeros[n - 1];
	if (numeros[0] < numeros[n - 1]) { 
		printf("Los números fueron ingresados de forma ascendente.\n");
	} else if (numeros[0] > numeros[n - 1]) {
		printf("Los números fueron ingresados de forma descendente.\n");
	} else {
		printf("Los números fueron ingresados de forma desordenada.\n");
	}
	printf("La suma entre el primer y el último número es: %d\n", suma);
}
int main() {
	int n;
	
	numeros(n);
	
	system("pause");
	return 0;
}
