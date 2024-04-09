#include <stdio.h>
#include <stdbool.h>

int main() {
float n1, n2, n3;
printf("Dgite a nota 1: ");
 scanf("%f", &n1);
printf("Dgite a nota 2: ");
 scanf("%f", &n2);
printf("Dgite a nota 3: ");
 scanf("%f", &n3);

if (((n1+n2+n3)/3.0) >= 6)
{
    printf("Aprovado!\n");
    return 0;
}
printf("Reprovado!\n");


 return 0;
}