// faca um progama para imprimir de forma ordenado (do menor para o maior) 3 numeros inteiros quaisquer lidos do teclado
#include <stdio.h>
int main() {
    int n1, n2, n3, ma, me, m;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    ma = me = m = n1;
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    if (ma < n2){
        ma = n2;
    }
    if (me > n2){
        me = n2;
    }
    if (me < n2 && ma >n2) {
        m = n2;
    }
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    if (ma < n3){
        ma = n3;
    }
    if (me > n3){
        me = n3;
    }
    if (me < n3 && ma >n3) {
        m = n3;
    }
printf("a ordem é %d, %d, %d", me, m, ma);
return 0;
}