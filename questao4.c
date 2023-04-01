/*  Questão 4 - Faça um programa que armazene a idade de até 5 pessoas em um vetor, apresente a média de todas as
idades informadas e exiba as idades maiores que 18 anos. */
#include<stdio.h>
#include<stdlib.h>
int main(){
    
    int soma, n, vetor[5];

    printf("Sera coletado a idade de 5 pessoas, escreva cada uma depois do comando a seguir.");

    for (n=0, soma=0.0;n<5;soma+=vetor[n++])
    {
    printf("\nEscreva a idade: ");
    scanf("%d", &vetor[n]);
    }

    printf("\nA media e: %d\n", soma/5);

    for (n=0;n<5;n++)
    {
        if(vetor[n]>18){
            printf("\nOs maiores de 18 anos sao: %d\n", vetor[n]);
        }
    }
    
    
}