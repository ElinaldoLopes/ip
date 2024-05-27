/*(vale 1,0) Faça um programa para registrar os acidentes de trânsito que acontecem
na ilha de Manhattan, na cidade de Nova York, e emitir um relatório com o número
de acidentes de suas intersecções. As ruas e avenidas da região devem ser
representadas por uma matriz. As linhas na matriz correspondem às avenidas, da
Primeira à Décima e as colunas correspondem às ruas, de 30 à 58. Em cada posição
da matriz, deve ser registrado o número de acidentes ocorridos, no período em
processamento, nas proximidades do cruzamento correspondente.
Considerar que um número desconhecido de dados de acidentes será lido. Defina
uma marca de parada para sinalizar o final da entrada de dados. O número de acidentes de
um cruzamento deverá ser fornecido seguindo um par de números que descrevem a sua
localização. Por exemplo, os valores 7, 5 e 54 como entrada significam que 7 acidentes
ocorreram nas vizinhanças da Quinta Avenida com a rua 54. Os valores lidos devem ser
verificados quanto à sua correção e apenas valores válidos devem ser aceitos.*/
#include <stdio.h>
#define MAXL 10
#define MAXC 58 - 30

/*
não li a questão toda e fiz codigo atoa ;-;
void prearr(int arr[MAXL][MAXC]) {
    int i, j, g, h, cont = 1;
    for (i = 0; i < MAXL; i++) {
        for (j = 0; j < MAXC; j++) {
            if(cont != 0) {
                printf("numero de acidentes na %d avenida rua %d: ", i, j+30);
                scanf("%d", &arr[i][j]);
                printf("deseja continuar? (0 para parar) ");
                scanf("%d", &cont);
            }
            else {
                arr[i][j] = 0;
            }
        }
    }
}*/

void prearr(int arr[MAXL][MAXC]) {
    int i, j;
    for (i = 0; i < MAXL; i++) {
        for (j = 0; j < MAXC; j++) {
        arr[i][j] = 0;
        }
    }
}

void impr(int f[MAXL][MAXC]) {
    int i, j;
    printf("\n");
    for (i = 0; i < MAXL; i++) {
        for (j = 0; j < MAXC; j++) {
            printf("[%02d] ", f[i][j]);
        }
        printf("\n");
    }
}

void acid(int f[MAXL][MAXC]) {
    int i, j, cont = 1, num, v = 0;
    while(cont > 0) {
        printf("digite o numero de acidentes (-1 para parar): ");
        scanf("%d", &cont);
        if(cont >= 0) {
            printf("digite a avenida (1-10): ");
            scanf("%d", &i);
            if (i < 1 || i > 10) {
                do {
                    printf("[VALOR INVALIDO] tente novamente! ");
                    scanf("%d", &i);
                } while (i < 1 || i > 10);
            }
            printf("digite a rua (30-58): ");
            scanf("%d", &j);
            if (j < 30 || j > 58) {
                do {
                    printf("[VALOR INVALIDO] tente novamente! ");
                    scanf("%d", &j);
                } while (j < 30 || j > 58);
            }
            j -= 30;
            f[i-1][j] = cont;
        }
    }
}

void linha() {
    printf("\n=======================================================================================================================================================\n");
}

int main() {
    int NY[MAXL][MAXC];
    linha();
    prearr(NY);
    acid(NY);
    linha();
    impr(NY);
    linha();
    return 0;
}