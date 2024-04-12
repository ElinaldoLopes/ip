// faça um progama para, dados 4 valores amarzenados nas variaveis x, y, w e z, calcule e imprima as médias aritimetica, geométrica, harmônica e ponderada (com peso 2 para variavel x, 4 para varriavel y, 6 para variavel w e 8 para variavel z)

#include <stdio.h>
#include <math.h>

int main() {
    
    float X, Y, W, Z;

    printf("Dgite o valor da variavel X:");
     scanf("%f", &X);
    printf("Dgite o valor da variavel Y:");
     scanf("%f", &Y);
    printf("Dgite o valor da variavel W:");
     scanf("%f", &W);
    printf("Dgite o valor da variavel Z:");
     scanf("%f", &Z);

    //medía aritimetica
    printf("a media aritimetica eh: %.2f", (X+Y+W+Z)/4.0);

    //medía geométrica
    printf("a media geometrica eh: %.2f", pow(X+Y+W+Z, 1.0/4.0));

    //mdeia harmonica
    printf("a media harmonica eh: %.2f", 3.0/((1.0/X)+(1.0/Y)+(1.0/W)+(1.0/Z)));

    //media ponderada
    printf("a media ponderada eh: %.2f",((X*2.0) + (Y*4.0) + (Z*8.0) + (W*6.0)) / (2.0+4.0+6.0+8.0)  );

    return 0;
}