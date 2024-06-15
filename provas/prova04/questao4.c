/*(vale 1,5) Defina um tipo registro com dois campos , x e y (reais). Os campos
representam as coordenadas de um ponto no sistema cartesiano. Escreva um
subprograma que, dados dois pontos, calcule e imprima a distância euclidiana entre
eles. As coordenadas dos pontos devem ser lidas a partir do programa principal e
passadas ao subprograma por meio de parâmetros do tipo struct Ponto. O
resultado da sua execução deve ser informado pelo programa principal.*/
#include <stdio.h>
#include <math.h>
typedef struct {
    float x, y;
    } Ponto;

void distancia(Ponto p1, Ponto p2) {
    float d;
    d = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    printf("A distancia entre os pontos (%f, %f) e (%f, %f) eh: %f\n", p1.x, p1.y, p2.x, p2.y, d);
}

int main() {
    Ponto p1, p2;
    printf("Entre com as coordenadas do ponto 1 (x, y): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Entre com as coordenadas do ponto 2 (x, y): ");
    scanf("%f %f", &p2.x, &p2.y);
    distancia(p1, p2);
    return 0;
}
