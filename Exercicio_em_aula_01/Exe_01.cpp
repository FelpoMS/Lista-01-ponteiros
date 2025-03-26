#include <stdio.h>
#include <stdlib.h>
#include <vector>

void trocarvetor(char *a,char *b,int x){
	char vazio[]={};

	for ( int i=0 ; i<x ; i++){
		b[i]=a[i];
		a[i]=vazio[i];
	
		
	}
	
}

int main(){
	char vet1[]={'a','b','c','d'};
	char vet2[]={" "};
	int x=sizeof(vet1)/sizeof(char);
	
	for(int i=0; i<x; i++){
	printf("%c, ",vet1[i]);	
	}
	printf(" vetor1");
	printf("\n");
	
	trocarvetor(vet1,vet2,x);
	
	for(int i=0; i<x; i++){
	printf("%c, ",vet1[i]);	
	}
	printf(" vetor 1 sem valores");
	printf("\n");
	
	for(int j=0; j<x; j++){
	printf("%c, ",vet2[j]);	
	}
	
	printf(" vetor 2");
	printf("\n%d quantidade de caracteres copiados",x);
	
}
