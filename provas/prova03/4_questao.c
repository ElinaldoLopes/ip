/*(vale 0,5) Faça um programa para ler o número de identificação (um número inteiro
positivo qualquer) e o escore (um número real entre 0,0 e 10,0) de 30 atletas (com
verificação de correção dos dados de entrada) e apresentar os dados dos atletas com
escore igual ou superior à média dos escores. Neste problema, os arranjos utilizados
para armazenar os números de identificação e os escores dos atletas têm
correspondência de posição. Os dados do primeiro atleta serão armazenados na
posição 1 de cada um dos dois arranjos, os dados do segundo atleta na posição 2 de
cada um dos dos arranjos, etc.*/
#include <stdio.h>
#define MAX 30

int main() {
    int id[MAX], i;
    float score[MAX], media, soma = 0, sco;
    
    
    for (i = 0; i < MAX; i++) {
        printf("\nDigite o id do atleta %d\n: ", i + 1);
        scanf("%d", &id[i]);
        printf("Digite o escore do atleta %d\n: ", i + 1);
        scanf("%f", &sco);

        while (sco < 0.0 || sco > 10.0) //validação do escore
        {
            printf("[ESCORE INVALIDO] tente novamente! \n");
            scanf("%f", &sco);
        }

        score[i] = sco;
        soma += sco;
        
    }
    media = soma / MAX;

    for (i = 0; i < MAX; i++) {
        if (score[i] >= media) {
            printf("\nID: [%d] ESCORE [%f]", id[i], score[i]);
        }
    }

    return 0;
}