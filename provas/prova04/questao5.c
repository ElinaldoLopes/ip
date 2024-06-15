/*(vale 1,5) Faça um programa que calcule uma média móvel. O programa deve
executar um laço de leitura de valores inteiros positivos; a introdução de um valor
negativo servirá como indicador de término do programa. Para cada valor fornecido
deverá ser impressa a média calculada. A média móvel é efetuada sobre um número
predeterminado de valores. Quando se introduz um novo valor dado, descarta-se o
valor mais antigo, abrindo lugar para o novo valor. Considere para a solução deste
problema cinco observações (valores) e assuma que pelo menos cinco pontos válidos
serão fornecidos.
Use obrigatoriamente subprogramas para:
● armazenar os novos valores no vetor de valores;
● calcular a média móvel.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 5
void armazenarValor(int *vet, int valor, int *posicao) {
    vet[(*posicao) % TAM] = valor;
    (*posicao)++;   
}
float calcularMedia(int *vet, int posicao) {
    int soma = 0;
    for(int i = 0; i < TAM; i++) {
        soma += vet[(posicao - i - 1) % TAM];
    }
    return (float)soma / TAM;
}
int main() {
    int vet[TAM];
    int posicao = 0;
    int valor;
    printf("Insira os valores (negativo para sair):\n");
    while(1) {
        scanf("%d", &valor);
        if(valor < 0) break;
        armazenarValor(vet, valor, &posicao);
        if(posicao >= TAM) {
            printf("Media: %.2f\n", calcularMedia(vet, posicao));
        }
    }
    return 0;
}


