/*(vale 1,5) Faça um programa para calcular o cosseno de x, para x variando de 0 até
6,3 (inclusive), de 0,1 em 0,1. O programa deverá imprimir x e o valor
correspondente do cosseno. O cálculo do cosseno deverá ser implementado através
de um subprograma que utilize a série:
cos(x) = 1 - x²/2! + x⁴/4! - x⁶/6! + x⁸/8! + …
Considerar as primeiras 30 parcelas da série para a obtenção do cosseno de x.
Compare o valor calculado pela série com o obtido quando utilizada a função
cos(x) da biblioteca math.h.*/
#include <stdio.h>
#include <math.h>

float fat(int n) {
    if (n<=1) {
        return 1;
    }
    return n * fat(n-1);
}
float coseno(float x) {
    float soma = 0;
    int sinal = 1;
    for (int i = 0; i < 30; i++) {
        soma += sinal * pow(x, 2*i) / fat(2*i);
        sinal *= -1;
    }
    return soma;
}
int main() {
    for (float x = 0; x <= 6.3; x += 0.1) {
        printf("x = %.1f\n", x);
        printf("Cosseno calculado pela série: %.6f\n", coseno(x));
        printf("Cosseno pela função cos(x) da biblioteca math.h: %.6f\n", cos(x));
        printf("\n");
    }
    return 0;
}