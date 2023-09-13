#include <stdio.h>
#include <stdlib.h>

int resis(int*r, int rt){
	int i=0;
	for(i=1;i<=5;i++){
		printf("Ingrese una resistencia: \n");
		scanf("%d",&r[i]);
		rt=rt+r[i];
	}
	printf("La resistencia 1 es: %d\n",r[1]);
	printf("La resistencia 2 es: %d\n",r[2]);
	printf("La resistencia 3 es: %d\n",r[3]);
	printf("La resistencia 4 es: %d\n",r[4]);
	printf("La resistencia 5 es: %d\n",r[5]);
	printf("La resistencia total es: %d\n",rt);
	
	return rt;
}

int main() {
	int r[6];
	int rt=0;
	
	resis(r,rt);
	
	system("pause");
	return 0;
}
