#include <stdio.h>
#include <stdlib.h>

int ventas(int*vendedores,int unidades){
	int i=0,total=0,m=0;
	for(i=1;i<=20;i++){
		printf("Ingrese las unidades vendidas del vendedor %d: ",i);
		scanf("%d",&vendedores[i]);
		total+=vendedores[i];
		if(vendedores[i]>m){
			m=vendedores[i];
		}
	}
	printf("El total de unidades vendidas es: %d\n",total);
	printf("El vendedor que mas ventas tiene hizo: %d\n",m);
}

int main(){
	int vendedores[20];
	int unidades;
	
	ventas(vendedores,unidades);
	
	system("pause");
	return 0;
}
