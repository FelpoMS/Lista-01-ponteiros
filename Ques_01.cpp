#include <stdlib.h>
#include <stdio.h>

//1. Cadastro de softwares para uma loja de Aplicativos.
struct Software{
	char nom;
	char cat; // produtividade, jogos , saude , edc...
	int notn; // de 1 - 10.
};


void mednota(){	
}

int main(){
	char nome,categoria;
	int nota,x;
	
	
	printf("quantos softwares pretende adicionar?:");
	scanf("%d",&x);
	
	for(int i=0;i<=x-1;i++){
	Software s[i];
		
	printf("Cadastro de Software. ()nome: \n");
	scanf("%s",s[i].nom);
	
	printf("\nCadastro de Software. ()categoria: \n");
	scanf("%s",s[i].cat);
	
	printf("\nCadastro de Software. ()nota(1-10): \n");
	scanf("%d",&s[i].notn);
	
	}
	
	
	
	
}

