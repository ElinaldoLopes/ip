#include <stdio.h>
int main() {
    float n1, n2=0;
    do
    {
        printf("digite um numero(31 para sair):");
        scanf("%f", &n1);
        if (n1 > 7)
        {
        n2 = n2 + n1;
        }
    } while (n1 != 31.0);
    printf("a soma eh: %.2f", n2);
    
}