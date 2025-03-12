#include <stdlib.h>
#include <stdio.h>
#include <string>

//Atividade 4: Ponteiros e Strings
//Contexto: Um sistema de cadastro de nomes precisa exibir o primeiro caractere de um nome digitado
//pelo usuário.
//? Declare uma string (vetor de caracteres) char nome[] = "Carlos";.
//? Declare um ponteiro ptr que aponte para o primeiro caractere da string.
//? Use o ponteiro para percorrer e imprimir cada caractere do nome em uma linha separada.
//Exemplo esperado de saída: 

int main(){
	
	char nome[50]="Carlos";
	char *ptr;
	ptr=nome;
	
	
	
	while (*ptr !='\0'){
		printf("%c\n",*ptr);
		ptr++;
	}
}
