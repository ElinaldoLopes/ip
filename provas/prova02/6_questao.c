//vai ser realizada uma pesquisa em porto alegre com um numero desconhecido de pessoas. de cada esntrevistado foram colhidos os segintes dados:a. qual seu clube de futebol de preferencia (1-gremi, 2-internacional, 3-outros); b. qual o seu salario; c. qual a sua cidade natal (0-porto alegra, 1-outras).
// esqueva um progama que informe: o numero de torcedores por clube; media salarial dos tocedores de gremio e do intenacional; numero de pessoas nascidas em porto alegre que nao torcem por qualquer do dois principais clubes; numero de pessoas entrevistadas
#include <stdio.h>
int main() {
    int gremio=0, inter=0, outro=0, outrop=0, rest, resn, sal, cont=0;
    char W='s';
    float salg=0, sali=0;
    do
    {
        printf("\nqual seu clube de futebol de preferencia (1-gremi, 2-internacional, 3-outros) ");
        scanf("%d", &rest);
        printf("\nqual o seu salario? ");
        scanf("%d", &sal);
        printf("\nonde voce nasceu? [0]porto alegre [1]outra ");
        scanf("%d", &resn);
        if (rest == 1)
        {
            gremio++;
            salg = salg + sal;
        }
        if (rest == 2)
        {
            inter++;
            sali = sali + sal;
        }
        if (rest == 3)
        {
            outro++;
        }
        if (rest == 3 && resn == 0) {
            outrop++;
        }
        cont++;
        printf("n\deseja continuar? [s]sim [outro]nao" );
        scanf(" %c", &W);
    } while (W == 's');
    printf("\n%d torcedores do gremio %d torcedores do inter %d torcedores de outro time", gremio, inter, outro);
    salg /=gremio;
    sali /=inter;
    printf("\nmedia salarial do gremio %.2f e do inter %.2f", salg, sali);
    printf("\n%d pessoas nasceram em porto e nao torcem para nenhum dos dois principais", outrop);
    printf("\num total de %d pessoas foram entrevistadas", cont);
    return 0;
}