//Questão 1 - Faça um programa em C, que faça a contagem progressiva e regressiva no mesmo laço de FOR.
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int numero, valor;

    for (numero=1; numero<=5; numero++)
    {
        printf("\n%d", numero);
    }

    printf("\n");

    for (valor=5; valor>=1; valor--)
    {
        printf("\n%d", valor);
    }
}