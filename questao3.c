/* Questão 3 - Faça um programa que receba como dado de entrada um numero inteiro e imprima na tela os números
do valor digitado até 0(Zero) em ordem descrecente, utilizando um laço de FOR */
#include<stdio.h>
#include<stdlib.h>

int main(void){
    int valor, num;

    printf("Insira um valor para ser realizado uma contagem decrescente desse valor: ");
    scanf("%d", &num);

    for (valor=num; valor>=0; valor--)
    {
        printf("\n%d", valor);
    }
    
}