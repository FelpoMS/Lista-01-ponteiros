#include <stdlib.h>
#include <stdio.h>

//Atividade 3: Trabalhando com Arrays e Ponteiros
//Contexto: Um professor deseja armazenar e acessar rapidamente as notas de três alunos utilizando
//ponteiros.
//? Declare um array de inteiros chamado notas com três valores: {85, 90, 78}.
//? Declare um ponteiro ptr que aponte para o primeiro elemento do array.
//? Use o ponteiro para percorrer o array e imprimir seus valores.
//? Modifique o segundo valor do array para 95 utilizando o ponteiro e imprima os valores
//atualizados.
//Exemplo esperado de saída:
//Notas antes da modificação: 85 90 78
//Notas depois da modificação: 85 95 78

int main (){
	int nota[3]={85,90,78},i=0;
	int *ptr;
	ptr=nota;
	for (int i=0; i<3; i++){
		printf ("notas(%d): %d, ",(i)+1,*(ptr+i));
	}
	printf("\n");
	
		printf ("notas (1): %d, notas (2) %d, notas (3) %d ",*ptr,*(ptr+1)+5,*(ptr+2));
		
		
	}

