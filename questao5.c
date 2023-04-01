/* Questão 5 - Faça um programa solicite números ao usuário até que a soma de todos os números informados pelo
usuário for pelo menos seja 30, utilizando um estruttura de repetição while. */
#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, soma=0;
    
    do{
		printf("Digite um numero: ");
		scanf("%d",&n);
        printf("\nPara sair da repeticao a soma devera ser maior que 30.\n");
		soma=soma+n;
	}
	while(soma<30);
	printf("\nA soma e %d\n",soma);
	return 0;
    
}