#include <stdlib.h>
#include <stdio.h>

//Atividade 1: Manipula��o de Vari�veis com Ponteiros
//Contexto: Jo�o est� aprendendo sobre ponteiros e quer entender como modificar o valor de uma
//vari�vel usando um ponteiro.
//? Declare uma vari�vel inteira chamada numero e atribua o valor 10 a ela.
//? Declare um ponteiro ptr que aponte para a vari�vel numero.
//? Use o ponteiro para modificar o valor da vari�vel para 20.
//? Imprima o valor de numero antes e depois da modifica��o. 

int main(){
	
	int numero = 10;
	int *ptr;
	ptr=&numero;
	
	printf("valor anterior %d\n",*ptr);
	*ptr =20;
	printf("valor posterior %d\n",numero);
}
