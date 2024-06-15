/*(vale 1,0) Faça um subprograma (fatorial) para calcular o fatorial de um inteiro n
qualquer. O valor de n deve ser passado como parâmetro para o subprograma. Osubprograma deve retornar o valor calculado do fatorial. O subprograma principal
(main) deve ler um valor m e imprimir o fatorial de todos os valores entre 1 e m.*/

#include <stdio.h>
#include <stdlib.h>
long long int fat(int n) {
    if (n<=1) {
        return 1;
    }
    return n * fat(n-1);
}
int main() {
    int n;
    printf("Digite um valor:");
    scanf("%d", &n);
    printf("Fatorial de %d!: ", n);
    for (int i = 1; i <= n; i++) {
        printf(" -> %lld", fat(i));
    }
    printf("\n");
    return 0;
}