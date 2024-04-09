#include <stdio.h>

int main() {

    char livro;
    int NL, TP;
    scanf("%c", &livro);
    scanf("%i", &NL);

    if (livro == 'A') {
        TP = NL*10;
        printf("total a pagar R$%2.f", TP);
    }
    else if (livro == 'A') {
        TP = NL*10;
        printf("total a pagar R$%2.f", TP);

    return 0 ;
}