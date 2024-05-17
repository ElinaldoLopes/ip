//1 faça um progama que leia o salario fixo de um vendedor e seu total de vendas(V) efetuadas no mês. acrescente ao salário um premia, conforme a seguinte tasbela
//a R$100,00 < V <= R$500,00, premio de R50,00
//b R$500,00 < V <= R$720,00, premio de R70,00
//c R$750,00 < V premio R$100,00
#include <stdio.h>
int main() {
    float f, v, p, s;
    printf("\ndigite o salario fixo: ");
    scanf("%f", &f);
    printf("\ndigite o total de vendas: ");
    scanf("%f", &v);

    if (100.0 < v && v <=500.0) {
        p = 50.0;
    }
    else if (v<750.0) {
        p = 100.0;
    }
    else if (v>750.0) {
        p = 100.0;
    }
    else {
        p = 0;
    }

    s = f+p;
    printf("\no salario de R$%.2f + o bonus de R$%.2f é R$%.2f\n", f, p, s);
    return 0;
}