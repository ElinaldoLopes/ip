//faca um progama que calcule e escreva a soma dos n primeiros termos da serie a segir sendo n fornecido pelo usuario. s = 100/0! + 99/1! + 98/2! + 97/3! + ...
#include <stdio.h>
int main() {
    float dividendo=100,fatorial=1, soma=0;
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    for (int i =1; i<=n; i++) {
        if (i>0) {
            fatorial *= i;
            dividendo--;
            soma += dividendo/fatorial;
        }
        else {
            soma += dividendo/1.0;
        }
    }
    printf("A soma dos %d primeiros termos da serie e: %.2f", n, soma);
}