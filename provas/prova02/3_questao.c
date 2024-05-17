//faca um progama que leia as idades e as alturas de cinco atletas de um clube esportivo, sendo cada um dos atletas identificado atraves de um codigo inteiro de 1 a 5 ). o progama deve: a. informar, atraves do seus codigos, quais atletas que tem menos de 18 anos; b. informar a media das idades dos atletas; c. informar a altura do atleta mias jovem e a do mais velho
#include <stdio.h>
int main () {
    int idv, idn, id, ids=0, alt, alts=0, altv=0, altn=0;
    for (int i = 1; i <6; i = i + 1) {
        printf ("Digite a idade do atleta %d: ", i);
        scanf("%d", &id);
        printf("\ndigite a altura em cm: ");
        scanf("%d", &alt);
        if (id < 18) {
            printf("o atleta %d tem menos de 18 anos", i);
        }
        if (i == 1) {
            idv = idn = id;
            altn = altv = alt;
        }
        else {
            if (id > idv) {
            idv = id;
            altv = alt;
            }
            if (id < idn) {
            idn = id;
            altn = alt;
            }
        }
        ids += id;
        alts += alt;
        id = alt = 0;
    }
    int idme;
    idme = ids / 5;
    printf("a media de idades eh %i", idme);
    printf("o atleta mais jovem tem %icm e o mais velho tem %icm", altn, altv);
}