#include <stdio.h>
#define MAX 3
float Maior(float n1, float n2, float n3) {
    float maior;
    maior = n1;
    if (n2 > maior) {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }
    return maior;
} 

int main() {
    float v1[MAX], v2[MAX], v3[MAX], vm[MAX];
    for (int i = 0; i < MAX; i++) {
        printf("Digite o valor do vetor 1: \n");
        scanf("%f", &v1[i]);
        printf("Digite o valor do vetor 2: \n");
        scanf("%f", &v2[i]);
        printf("Digite o valor do vetor 3: \n");
        scanf("%f", &v3[i]);
        vm[i] = Maior(v1[i], v2[i], v3[i]);
    }
    printf(" [ ");
    for (int i=0;i<MAX;i++) {
        printf("%.2f ", vm[i]);
    }
    printf(" ] \n");
}