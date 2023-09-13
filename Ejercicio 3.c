#include <stdio.h>
#include <stdlib.h>


int nums(int*num){
	printf("Ingrese un numero: ");
	scanf("%d",&num[1]);
	printf("Ingrese otro numero: ");
	scanf("%d",&num[2]);
	while(num[1]<num[2]){
		printf("%d\n",num[1]+1);
		num[1]++;
	}
}
int main(){
	int num[2];
	nums(num);
	
	system("pause");
	return 0;
}
