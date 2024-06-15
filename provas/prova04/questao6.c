/*(vale 3,0) Considere um registro que deve armazenar os dados referentes ao código
(inteiro) de um produto de uma empresa que fabrica peças de vestuário, o tipo doproduto (tipos disponíveis: P, M e G – pequeno, médio e grande), a quantidade vendida para cada um dos 6 dias de uma semana (arranjo de 6 elementos, inteiros) e
a quantidade média vendida na semana (média dos 6 dias). Considere que os dados
relativos aos 50 produtos vendidos pela empresa são armazenados em um vetor
cujos elementos correspondem a essa estrutura. Faça um programa que, por meio de
um subprograma, processe as vendas efetuadas, armazenando os dados
correspondentes na estrutura mencionada para 6 dias de uma semana. O
subprograma deverá ler dados referentes ao dia da semana, código de produto e
quantidade vendida desse produto. No final da entrada dos dados da semana, o
programa principal deverá calcular as médias da semana para cada produto e
imprimir um relatório com os dados finais da estrutura: para cada produto, total
vendido por dia e a média da semana.*/


//fiquei meia hora tentando enteder o que a questão pedia, acho que é isso ai
#include <stdio.h>
typedef struct {
    int codigo;
    char tipo;
    int vendas[6];
    float media;
} produto;

void lerVendas(produto produtos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);
        printf("Tipo (P, M ou G): ");
        scanf(" %c", &produtos[i].tipo);
        for (int j = 0; j < 6; j++) {   
            printf("Vendas do dia %d: ", j + 1);
            scanf("%d", &produtos[i].vendas[j]);
            }
            }
}
void calcularMedia(produto produtos[], int n) {
    for (int i = 0; i < n; i++) {
        int soma = 0;
        for (int j = 0; j < 6; j++) {
            soma += produtos[i].vendas[j];
        }
        produtos[i].media = (float)soma / 6;
    }
}
void imprimirRelatorio(produto produtos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Codigo: %d\n", produtos[i].codigo);
        printf("Tipo: %c\n", produtos[i].tipo);
        printf("Vendas por dia: ");
        for (int j = 0; j < 6; j++) {
            printf("%d ", produtos[i].vendas[j]);
        }
        printf("\n");
        printf("Media da semana: %.2f\n\n", produtos[i].media);
    }
}
int main() {
    int n;
    printf("Quantos produtos? ");
    scanf("%d", &n);
    produto produtos[n];
    lerVendas(produtos, n);
    calcularMedia(produtos, n);
    imprimirRelatorio(produtos, n);
    return 0;
}
