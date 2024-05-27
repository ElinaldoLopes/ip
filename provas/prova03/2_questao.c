/*(vale 0,5) Faça um programa para deslocar todos os elementos de um arranjo
unidimensional de N posições para o elemento anterior, perdendo o valor contido no
primeiro elemento e atribuindo zero ao primeiro elemento.*/
#include <stdio.h>
#define MAX 10

void prearr(int arr[MAX]) {
    int i;
    for (i = 0; i < MAX; i++) {
        arr[i] = rand() % MAX;
    }
}

void impr(int arr[MAX]) {
    int i;
    printf("\n");
    for (i = 0; i < MAX; i++) {
        printf("[%d] ", arr[i]);
    }
}

int main() {
    int arr[MAX], i;

    prearr(arr);
    impr(arr);
    for (i = 1; i < MAX; i++) {
        arr[i] = arr[i+1];
    }
    arr[MAX-1] = 0;
    impr(arr);
    return 0;
}