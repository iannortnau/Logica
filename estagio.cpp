#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	int aux=a,aux2=0;
	for(int i=0;i<a;i++){
		for(int j=0;j<aux;j++){
			printf(" ");
		}
		aux--;
		for(int j=0;j<=aux2;j++){
			printf("#");
		}
		aux2++;
		printf("\n");
	}
}
