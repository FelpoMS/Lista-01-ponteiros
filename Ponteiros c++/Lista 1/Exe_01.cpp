#include <stdlib.h>
#include <stdio.h>

//Atividade 1: Manipulação de Variáveis com Ponteiros
//Contexto: João está aprendendo sobre ponteiros e quer entender como modificar o valor de uma
//variável usando um ponteiro.
//? Declare uma variável inteira chamada numero e atribua o valor 10 a ela.
//? Declare um ponteiro ptr que aponte para a variável numero.
//? Use o ponteiro para modificar o valor da variável para 20.
//? Imprima o valor de numero antes e depois da modificação. 

int main(){
	
	int numero = 10;
	int *ptr;
	ptr=&numero;
	
	printf("valor anterior %d\n",*ptr);
	*ptr =20;
	printf("valor posterior %d\n",numero);
}
