#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
	
	printf("Ingrese la cantidad de términos de la secuencia Fibonacci que desea mostrar: ");
	scanf("%d", &n);
	if (n <= 0) {
		printf("La cantidad de términos debe ser mayor que cero.\n");
		return 1;
	}
	if (n == 1) {
		printf("1\n");
		return 0;
	}
	int fibonacci[n];
	fibonacci[0] = 1;
	fibonacci[1] = 1;
	for (int i = 2; i < n; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	printf("Secuencia Fibonacci de %d términos:\n", n);
	for (int i = 0; i < n; i++) {
		printf("%d", fibonacci[i]);
		if (i < n - 1) {
			printf(", ");
		}else{
			printf("\n");
		}
	}
	
}
int main() {
	int n;
	
	fibonacci(n);
	
	system("pause");
	return 0;
}
