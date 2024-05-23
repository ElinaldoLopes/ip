/*exercício 9.2 Faça um programa que leia quatro matrizes inteiras, 5 × 5 (A, B, C e D), com
pelo menos dois subprogramas: um que carrega valores em uma matriz, a ser usado para a
leitura das quatro matrizes, e um segundo que recebe duas matrizes 5 × 5 e calcula a matriz
soma. Aplique esse último subprograma para obter A + B, C + D e A + C.*/
#include <stdio.h>
#define MAX 5
#define MAXR 100


void preencher(int f[MAX][MAX]) {
    int i, j;
    for(i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            f[i][j] = rand() % (MAXR + 1);
        }
    }
}

void somar(int f[MAX][MAX], int g[MAX][MAX], int s[MAX][MAX]) {
    int i, j;
    for(i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            s[i][j] = f[i][j] + g[i][j];
        }
    }
}

void imprimir(int f[MAX][MAX]) {
    int i, j;
    printf("\n");
    for(i = 0; i < MAX; i++) {
        for(j = 0; j < MAX; j++) {
            printf("[%03d] ", f[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m0[MAX][MAX], m1[MAX][MAX], m2[MAX][MAX], m3[MAX][MAX];
    int s0[MAX][MAX], s1[MAX][MAX], s2[MAX][MAX];

    preencher(m0);
    preencher(m1);
    preencher(m2);
    preencher(m3);

    somar(m0, m1, s0);
    somar(m2, m3, s1);
    somar(m0, m2, s2);
    
    printf("matriz A:");
    imprimir(m0);
    printf("matriz B:");
    imprimir(m1);
    printf("matriz C:");
    imprimir(m2);
    printf("matriz D:");
    imprimir(m3);

    printf("matriz A + B:");
    imprimir(s0);
    printf("matriz C + D:");
    imprimir(s1);
    printf("matriz A + C:");
    imprimir(s2);

    return 0;
} 