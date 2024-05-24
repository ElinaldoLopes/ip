#include <stdio.h>
struct Data {
    int dia;
    int mes;
    int ano;
};
struct aluno {
    char nome;
    struct Data adm;
    struct Data nac;
};

int main() {
    struct aluno aln;
    int id;


    printf("Digite os dados do aluno:\n");
    printf("Letra de indetifissao: "); scanf("%c", &aln.nome);
    printf("Data de admissao dd/mm/yy\n");
    scanf("%d", &aln.adm.dia);
    scanf("%d", &aln.adm.mes);
    scanf("%d", &aln.adm.ano);
    printf("Data de nascimento dd/mm/yy\n");
    scanf("%d", &aln.nac.dia);
    scanf("%d", &aln.nac.mes);
    scanf("%d", &aln.nac.ano);

    if (aln.adm.mes > aln.nac.mes) {
        id = aln.adm.ano - aln.nac.ano;
    }
    else {
        id = aln.adm.ano - aln.nac.ano -1;
    }

    printf("idade: %d", id);
    return 0;

}