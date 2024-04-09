#include <stdio.h>

int main() {
float n1, n2, n3, M;
char nota;
printf("digite a nota 1: ");
 scanf("%f", &n1);
printf("digite a nota 2: ");
 scanf("%f", &n2);
printf("digite a nota 3: ");
 scanf("%f", &n3);

//calculo media
M = (n1+n2+n3)/3;
printf("a media desse aluna eh %.2f\n", M);

//verificando a nota
if (M >= 9) {
    nota = 'A';
}
else if (M >= 7.5) {
    nota = 'B';
}
else if (M >= 6) {
    nota = 'C';
}
else {
    nota = 'D';
}

printf("a nota do aluno eh %c\n", nota);
return 0;
}