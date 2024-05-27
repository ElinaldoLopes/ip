/*vale 2,0) Faça um programa que declare uma matriz M(4x4) de tipo inteiro. Sobre
essa matriz efetue as seguintes operações
a. preencha por leitura;
b. imprima o conteúdo na forma de uma matriz;
c. troque a primeira linha da matriz com a primeira coluna da matriz e imprima novamente;
d. imprima os elementos da diagonal principal em uma linha e depois os da diagonal secundária em outra linha;
e. zere a segunda coluna da matriz e imprima novamente;
f. preencha um vetor com o produto dos elementos de cada coluna e imprima esse vetor;
g. multiplique a matriz por um valor real lido e imprima novamente.*/
#include <stdio.h>
#define MAX 4

void prearr(int f[MAX][MAX]) {
    int i, j;
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            printf("Insira o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &f[i][j]);
        }
    }
}

void imprm(int f[MAX][MAX]) {
    int i, j;
    printf("\n");
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            printf("[%02d] ", f[i][j]);
        }
        printf("\n");
    }
}

void troclc(int f[MAX][MAX]) {
    int aux[MAX], i, j;
    for (i = 0; i < MAX; i++) {
        aux[i] = f[0][i];
    }
    for (i = 0; i < MAX; i++) {
        f[0][i] = f[i][0];
        f[i][0] = aux[i];
    }
}

void pri(int f[MAX][MAX]) {
    int i;
    printf("Diagonal Principal: \n");
    for (i = 0; i < MAX; i++) {
        printf("[%02d] ", f[i][i]);
    }
    printf("\n");
}

void sec(int f[MAX][MAX]) {
    int i, j;
    printf("Diagonal secundaria: \n");
    for (i = 0; i < MAX; i++) {
        printf("[%02d] ", f[i][MAX - i - 1]);
    }
    printf("\n");
}

void zer(int f[MAX][MAX]) {
    int i;
    for (i = 0; i < MAX; i++) {
        f[i][1] = 0;
    }
}

void mult(int f[MAX][MAX], float n) {
    int i, j;
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            f[i][j] *= n;
        }
    }
}


void impra(int f[MAX]) {
    int i;
    printf("Produtos das linhas: \n");
    for (i = 0; i < MAX; i++) {
        printf("[%02d] ", f[i]);
    }
}

int main() {
    int M[MAX][MAX], prod[MAX];
    float n;
    prearr(M);
    imprm(M);
    troclc(M);
    printf("\n");
    imprm(M);
    pri(M);
    sec(M);
    zer(M);
    imprm(M);
    int i, j, p;
    for (j = 0; j < MAX; j++) {
        p = 1;
        for (i = 0; i < MAX; i++) {
            p *= M[i][j];
        }
        prod[j] = p;
    }
    impra(prod);
    printf("\ndigite um numero real pra multiplicar a matriz: ");
    scanf("%f", &n);
    mult(M, n);
    imprm(M);

    return 0;
}