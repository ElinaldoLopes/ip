//faça um progama que calcule a quantidade de latas de tinta nescessarias para pintar um aposento. O progama deve receber como emtrada as dimensões desse aposento (largura e comprimento). Cconsidere que:
//A. o aposento tem paredes perpendiculares
//B. o pé-direito do aposento mede 2,80m
//C. deverão ser pintadasapenas as paredes
//D. o aposento tem apens uma porta (cuja área deve ser descontada), medindo 0,80m de lrgura por 2,10m de altura
//E. não é nescessario descontar a área da janela
//F. cada lata de tinta tem 5,00 litros
//G. cada litro pinta 3,00m²

#include <stdio.h>

int main() {

    float L, C, A;
    printf("Digite a largura do aposento em metros: ");
     scanf("%f", &L);
    printf("Agora digite o Comprimento do aposento em metros: ");
     scanf("%f", &C);

    //area da largura
    A = (L * 2.8) * 2.0;
    //area do comprimento
    A += (C * 2.8) * 2.0;
    //subtração da porta
    A -= 0.8 * 2.1;
    //divisão por lata
    A /= 3.0;
    A /= 5.0;

    printf("sera nescessario %.2f latas de tinta\n", A);

    return 0;
}