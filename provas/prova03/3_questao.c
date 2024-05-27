/*(vale 0,5) Faça um programa para preencher um arranjo unidimensional de N inteiros
por leitura. Depois, gerar um novo arranjo, a partir do arranjo lido anteriormente,
apenas com os valores múltiplos de cinco contidos no vetor original. O novo arranjo
gerado deve ser preenchido de modo contínuo, ou seja, a partir do início, posição
após posição. Apresentar o novo vetor gerado ou, se for o caso, uma mensagem
informando que não existem valores com essa característica no arranjo original.*/
#include <stdio.h>

void impr(int N,int arr[N]) {
    int i;
    printf("\n");
    for (i = 0; i < N; i++) {
        printf("[%d] ", arr[i]);
    }
}

int main() {
    int N, i, cont=0, cont5=0;

    printf("digite o tamanho do arranjo: ");
    scanf("%d", &N);
    int arr1[N];

    for (i = 0; i < N; i++) {
        printf("digite o valor do arranjo[%d]: ", i);
        scanf("%d", &arr1[i]);
        if (arr1[i] % 5 == 0) {
            cont5++;
        }
    }

    impr(N, arr1);

    if (cont5 == 0) {
        printf("não existem valores múltiplos de 5 no arranjo");
        return 0;
    }

    else {
        int arr2[cont5];

        for (i = 0; i < N; i++) {
            if (arr1[i] % 5 == 0) {
                arr2[cont] = arr1[i];
                cont++;
            }
        }
         impr(cont5, arr2);
    }
    return 0;
}
