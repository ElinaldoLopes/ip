//um hotel com 75 apartamentos deseja fazer uma promoção  especial de final de semana, concedendo um desconto de 25% na diaria. com isso, espera aumentar sua taxa de ocupação de 50% para 80%. sendo o valor normal da diaria, calcule e imprima: A. o valor da diaria promocional, B. o valor arrecadado com 80% de ocupação e diaria promocional, C. o valor arrecadado com 50% de ocupação e a diaria normal, D. a diferença de valores de A e B

#include <stdio.h>
int main() {

    float N, NP;
    int A1, A2;
    printf("digite o valor da Diaria: ");
     scanf("%f", &N);

    //promoção
    NP = N*0.75;
    
    //diaria promocional
    printf("o valor promocional eh: %.2f\n", NP);

    //valor arrecadado com 80%
    A1 = 75*0.8;
    printf("o valor arrecadado com 80%% eh: R$:%.2f\n", A1 * NP);

    //valor arrecadado com 50%
    A2 = 75*0.5;
    printf("o valor arrecadado com 50%% eh: R$:%.2f\n", A2 * N);

    //diferença
    printf("a diferença de A e B eh: R$:%.2f\n", (A1*NP)-(A2*N));
    

    return 0;
}