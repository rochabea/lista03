/*Questão 2 - Faça um programa que imprima na tela os numeros inteiros de 1 a 15 em ordem descrecente, utilizando
apenas uma variável e um laço de FOR. */
#include<stdio.h>
#include<stdlib.h>

int main(void){
    int valor;

    for (valor=15; valor>=1; valor--)
    {
        printf("\n%d", valor);
    }
}