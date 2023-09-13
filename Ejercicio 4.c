#include <stdio.h>
#include <stdlib.h>

int notas(int*alumnos){
	int i=0,suma=0;
	float promedio=0;
	for(i=1;i<=30;i++){
		printf("Ingrese la nota del alumno %d: \n",i);
		scanf("%d",&alumnos[i]);
		suma=suma+alumnos[i];
	}
	promedio=suma/30;
	printf("El promedio del curso es: %f\n",promedio);
}

int main(){
	int alumnos[30];

	notas(alumnos);
	
	system("pause");
	return 0;
}
