/*(vale 1,0) Uma matriz esparsa (arranjo bidimensional espaço) é uma matriz que tem
aproximadamente dois terços de seus elementos iguais a zero. Escreva um programa
que leia uma matriz esparsa de M linhas e N colunas e que forme uma matriz
condensada, de apenas 3 colunas, com os elementos não nulos da matriz original, de
forma que, em cada linha da matriz condensada onde:
a. a primeira coluna contenha um valor não nulo da matriz esparsa;
b. a segunda coluna contenha o índice da linha da matriz esparsa onde foi
encontrado esse valor;
c. a terceira coluna contenha o índice da coluna da matriz esparsa onde foi
encontrado esse valor.
Imprima a matriz original e a matriz condensada em formato matricial.
obs.: Para facilitar, a matriz condensada deve ser declarada com um número de
linhas igual ao número de elementos da matriz esparsa para que não haja risco de faltar
espaço de armazenamento durante o processamento.*/
#include <stdio.h>

int main() {
    int m, n, i, j, cont=0;
    printf("\ndigite o numero de linhas: ");
    scanf("%d", &m);
    printf("\ndigite o numero de colunas: ");
    scanf("%d", &n);

    printf("preencha a matriz: \n");
    int esp[m][n];

    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            printf("linha[%d], coluna[%d]:\n", i, j);
            scanf("%d", &esp[i][j]);
            if (esp[i][j] != 0) {
                cont++;
            }
        }
    }

    int cond[cont][3];
    int ci=0, cj=0;
    
     for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            if (esp[i][j] != 0) {
                cond[ci][cj] = esp[i][j];
                cond[ci][cj+1] = i;
                cond[ci][cj+2] = j;
                ci++;
            }
        }
    }
    printf("matriz esparsa: \n");
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            printf("[%d] ", esp[i][j]);
        }
        printf("\n");
    }

    printf("matriz condensada: \n");
    for ( i = 0; i < cont; i++) {
        for ( j = 0; j < 3; j++) {
            printf("[%d] ", cond[i][j]);
        }
        printf("\n");
    }

    return 0;
}