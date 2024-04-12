#include <stdio.h>

int main() {
    int cont ,aln;
    float M, MT,SM, N1, N2, N3;

    printf("quantos alunos voce quer dar a nota? \n");
    scanf("%i", &aln);


    SM = 0.0;
    for (cont = 1; cont <= aln; cont = cont + 1) {
        printf("Digite a nota 1: \n");
        scanf("%f", &N1);

        printf("Digite a nota 2: \n");
        scanf("%f", &N2);

        printf("Digite a nota 3: \n");
        scanf("%f", &N3);

        M = (N1+N2+N3)/3.0;
        printf("------------\n");
        printf("a media do %i: %.2f\n",cont, M);
        printf("------------\n");
        SM = SM+M;
    }
    MT = SM/aln;
    printf("------------\n");
    printf("a media da turma é %.2f\n", MT);
    printf("------------\n");
    return 0;
}