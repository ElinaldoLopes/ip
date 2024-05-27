/*(vale 2,0) Dada uma matriz M(5x5), escreva um programa que realize a seguinte
sequência de operações:
a. preencha a matriz por leitura;
b. imprima seus valores na forma de uma matriz;
c. procure e imprima o maior elemento de cada linha da matriz;
d. procure e imprima o maior elemento de cada coluna da matriz;
e. procure e imprima o menor elemento de cada linha da matriz;
f. procure e imprima o menor elemento de cada coluna da matriz;
g. calcule e imprima a média dos elementos de cada linha;
h. calcule e imprima a média dos elementos de cada coluna;
i. conte e imprima todos os elementos maiores que a média de cada coluna;
j. conte e imprima todos os elementos maiores que a média de cada linha;
k. conte e imprima todos os elementos menores que a média de cada coluna;
l. conte e imprima todos os elementos menores que a média de cada linha.*/
#include <stdio.h>
#define MAX 5

void prearr(int arr[MAX][MAX]) {
    int i, j;
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
        arr[i][j] = rand() % (MAX*MAX);
        }
    }
}

void impr(int f[MAX][MAX]) {
    int i, j;
    printf("\n");
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            printf("[%02d] ", f[i][j]);
        }
        printf("\n");
    }
}

void maiorl(int f[MAX][MAX]) {
    int i, j, maior;
    maior = f[0][0];
    for (i = 0; i < MAX; i++) {
        maior = f[i][0];
        for (j = 0; j < MAX; j++) {
            if (f[i][j] > maior) {
                maior = f[i][j];
            }
        }
        printf("maior elemento da linha[%d]: %d\n", i, maior);
    }
}

void menorl(int f[MAX][MAX]) {
    int i, j, menor;
    menor = f[0][0];
    for (i = 0; i < MAX; i++) {
        menor = f[i][0];
        for (j = 0; j < MAX; j++) {
            if (f[i][j] < menor) {
                menor = f[i][j];
            }
        }
        printf("menor elemento da linha[%d]: %d\n", i, menor);
    }
}

void maiorc(int f[MAX][MAX]) {
    int i, j, maior;
    maior = f[0][0];
    for (i = 0; i < MAX; i++) {
        maior = f[0][i];
        for (j = 0; j < MAX; j++) {
            if (f[j][i] > maior) {
                maior = f[j][i];
            }
        }
        printf("maior elemento da coluna[%d]: %d\n", i, maior);
    }
}

void menorc(int f[MAX][MAX]) {
    int i, j, menor;
    menor = f[0][0];
    for (i = 0; i < MAX; i++) {
        menor = f[0][i];
        for (j = 0; j < MAX; j++) {
            if (f[j][i] < menor) {
                menor = f[j][i];
            }
        }
        printf("menor elemento da coluna[%d]: %d\n", i, menor);
    }
}

void medial(int f[MAX][MAX]) {
    int i, j, g, soma, media;
    for (i = 0; i < MAX; i++) {
        soma = 0;
        for (j = 0; j < MAX; j++) {
            soma += f[i][j];
        }
        media = soma / MAX;
        printf("media da linha[%d]: %02d\n", i, media);

        printf("elementos acima da media da linha[%d]: ", i);
        for (g = 0; g < MAX; g++) {
            if (f[i][g] > media) {
                printf("[%02d] ", f[i][g]);
            }
        }
        linha();

        printf("elementos abaixo da media da linha[%d]: ", i);
        for (g = 0; g < MAX; g++) {
            if (f[i][g] < media) {
                printf("[%02d] ", f[i][g]);
            }
        }
        linha();
    }
}

void mediac(int f[MAX][MAX]) {
    int i, j, g, soma, media;
    for (i = 0; i < MAX; i++) {
        soma = 0;
        for (j = 0; j < MAX; j++) {
            soma += f[j][i];
        }
        media = soma / MAX;
        printf("media da coluna[%d]: %02d\n", i, media);

        printf("elementos acima da media da coluna[%d]: ", i);
        for (g = 0; g < MAX; g++) {
            if (f[g][i] > media) {
                printf("[%02d] ", f[g][i]);
            }
        }
        linha();

        printf("elementos abaixo da media da coluna[%d]: ", i);
        for (g = 0; g < MAX; g++) {
            if (f[g][i] < media) {
                printf("[%d] ", f[g][i]);
            }
        }
        linha();
    }
}

void linha() {
    printf("\n=================================================\n");
}

int main() {
    int matriz[MAX][MAX];
    prearr(matriz);
    impr(matriz);
    linha();
    maiorl(matriz);
    linha();
    maiorc(matriz);
    linha();
    menorl(matriz);
    linha();
    menorc(matriz);
    linha();
    medial(matriz);
    linha();
    mediac(matriz);
    return 0;
}