//escreva um progama que transforme o valor correspondente a um intervalo temporal, expresso em horas, minutos e segundos, no valor correspondente em millisegundos 
#include <stdio.h>

int main() {

    int H, M, S, m;
    printf("digite as horas: ");
     scanf("%i", &H);
    printf("Digite os minutos: ");
     scanf("%i", &M);
    printf("Digite os segundos: ");
     scanf("%i", &S);
    
    //conversão para millisegundos
    m = (H * 3600000.0) + (M * 60000.0) + (S * 1000.0);

    printf("a confersão de %i:%i:%i para millisegundos eh: %.i", H, M, S, m);

    return 0;
}