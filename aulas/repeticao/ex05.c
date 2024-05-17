#include <stdio.h>
int main() {
    int aln10=0,aln15=0,aln20=0,R;
    char rep='S';
    printf("=============================\n");
    printf(" dejesa adicionar alunos?\n");
    printf(" [S] Sim\n");
    printf(" [N] Nao\n");
    printf("=============================\n");
    scanf("%c", &rep);
    while (rep == 'S'||rep == 's')
    {
        printf("===============================================\n");
        printf(" Quantas refeicoes voce fez no mes anterior?\n");
        printf("===============================================\n");
        scanf("%i", &R);
        if (R < 10)
        {
            aln10++;
        }
        else if (R >= 10 && R <= 20)
        {
            aln15++;
        }
        else {
            aln20++;
        }
        printf("======================\n");
        printf(" deseja continuar?\n");
        printf(" [S] Sim\n");
        printf(" [N] Nao\n");
        printf("======================\n");
        scanf(" %c", &rep);
    }
    printf("total de %i aluno", aln10+aln15+aln20);
    printf("toal de %i alunos com 10 refeicoes")
    printf("=========\n");
    printf(" FIM\n");
    printf("=========\n");
}