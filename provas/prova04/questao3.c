/*(vale 1,5) Construa um subprograma que, recebendo como parâmetros quatro
números inteiros, devolva ao módulo que o chamou a soma dos três maiores
números dentre os quatro recebidos. Faça um programa que leia tantos conjuntos de
quatro valores quantos o usuário deseje e que chame o subprograma para cada
conjunto de valores, apresentando a cada vez a soma produzida.*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int menor(int a[MAX]) {
    int menor = a[0];
    for (int i = 1; i < MAX; i++)
    {
        if (a[i] < menor) {
            menor = a[i];
        }
    }
    return menor;
    
}
int som(int a[MAX]) {
    int soma = 0;
    for (int i = 0; i < MAX; i++) {
        soma += a[i];
    }
    soma -= menor(a);
    return soma;

}

int main() {
    int a[MAX];
    char esc='S';
    do
    {
        printf("Entre com 4 valores:\n");
        for (int i = 0; i < MAX; i++) {
            scanf("%d", &a[i]);
        }
        printf("Soma dos 3 maiores: %d\n", som(a));

        printf("[S] continuar \n[N] finalizar\n");
            scanf(" %c", & esc);
   
    } while (esc == 'S');
    

    return 0;
}