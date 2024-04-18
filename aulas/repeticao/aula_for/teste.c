#include <stdio.h>

int main() {
    int cont ,aln, i, NN;
    float M, MT,SM, N;

    printf("quantos alunos voce quer dar a nota? \n");
    scanf("%i", &aln);
    printf("e quantas notas? \n");
    scanf("%i", &NN);


    SM = 0.0;
    
    //for para calcular a media
    for (cont = 1; cont <= aln; cont = cont + 1) {
        M = 0.0;
        //for para receber as notas
        for(i=1; i<=NN; i++) {
            printf("digite a nota %i: ", i);
            scanf("%f", &N);
            M = M + N;
        }
        //calculo da media do aluno 
        M = M/NN;
        printf("---------------------------------------\n");
        printf("a media do %i: %.2f\n",cont, M);
        printf("---------------------------------------\n");
        SM = SM+M;
    }
    //caluculo da media da turma
    MT = SM/aln;
    printf("---------------------------------------\n");
    printf("a media da turma é %.2f\n", MT);
    printf("---------------------------------------\n");
    return 0;
}