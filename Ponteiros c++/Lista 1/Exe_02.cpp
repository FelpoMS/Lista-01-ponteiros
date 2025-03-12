#include <stdlib.h>
#include <stdio.h>

//Atividade 2: Trocando Valores entre Duas Vari�veis com Ponteiros
//Contexto: Em um jogo, dois jogadores possuem pontua��es diferentes. O sistema precisa de uma
//fun��o para trocar os valores das pontua��es usando ponteiros.
//? Declare duas vari�veis inteiras pontos1 = 50 e pontos2 = 100.
//? Crie uma fun��o chamada trocaValores que receba dois ponteiros para inteiros e troque seus
//valores.
//? Chame a fun��o passando os endere�os de pontos1 e pontos2.
//? Imprima os valores antes e depois da troca. 


void trocadvalor (int *p1, int *p2){
int temp=*p1;
 *p1=*p2;
 *p2=temp;
 	
}

int main () {
	
int pontos1=50, pontos2 = 100;

printf("valor original do ponteiro 1: %d, ponteiro 2: %d\n",pontos1,pontos2);

trocadvalor(&pontos1,&pontos2);

printf("valor trocado ponteiro 1: %d, ponteiro 2: %d",pontos1,pontos2);


}
