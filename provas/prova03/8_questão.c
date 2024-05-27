/*(vale 1,0) Na Teoria de Sistemas, define-se como elemento minimax de uma matriz o
menor elemento da linha em que se encontra o maior elemento da matriz. 
Escrevaum programa que preencha uma matriz M(5x5) por leitura e determine o seu
elemento minimax*/
#include <stdio.h> 
#define MAX 2

void prearr(int f[MAX][MAX]) {
    int i, j;
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            printf("Insira o valor da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &f[i][j]);
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

int maior(int f[MAX][MAX]) {
    int i, j, maior = f[0][0], l;
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            if (f[i][j] > maior) {
                maior = f[i][j];
                l = i;
            }
        }
    }
    return l;
}


int main() {
    int arr[MAX][MAX];
    int m;

    prearr(arr);
    impr(arr);
    m = maior(arr);
    int i, minimax = arr[m][0];
    for (i = 0; i < MAX; i++) {
        if (arr[m][i] < minimax) {
            minimax = arr[m][i];
        }
    }
    printf("minimax = %d\n", minimax);

    return 0;
}