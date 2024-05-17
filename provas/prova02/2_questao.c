// considere uma loja que, ao fazer o calculo do valor a ser pago em uma compra, da um desconto de acordo com onumero de unidades compradas, conforme a seginte tabela: a. ate 10 uni, nao ha desconto; b. de 11 a 20 10%; c. de 21 a 30 20%; d. acima de 50 30%
#include <stdio.h> 
int main() {
    float v, d,vd, desc;
    int uni;
    printf("\ndigite o valor do produto: ");
    scanf("%f", &v);
    printf("digite o numero de unidades: ");
    scanf("%i", &uni);
    if (11 <= uni && uni <=20) {
        d= 0.9;
    }
    else if (uni <= 30)
    {
        d = 0.8;
    }
    else if (uni > 50)
    {
        d = 0.7;
    }
    else {
        d = 1;
    }
    
    vd = (v*uni) * d;
    desc = 100 - (100.0 * d);
    if (d < 1) {
        printf("\ncom o deconto de %.2f%% fica R$%.2f", desc, vd);
    }
    else {
        printf("\no valor total é de R$%.2f",vd);
    }

    return 0;
}