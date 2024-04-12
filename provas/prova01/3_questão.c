#include <stdio.h>
#include <math.h>
int main() {

    float H, V, T1, T2, delta;
    printf("digite a altura: ");
     scanf("%f", &H);
    printf("digite a veocidade: ");
     scanf("%f", &V);

    delta = (V*V) - (4 * 5 * H);
    T1 = (-V + sqrt(delta)) / 10;
    T2 = (-V - sqrt(delta)) / 10;

    printf("%.2f  %.2f", T1, T2);

    return 0;
}