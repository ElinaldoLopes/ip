#include <stdio.h>
#define MAX 5
int main() {
    float A[MAX];
       for (int i = 0; i < MAX; i++) {
        scanf("%f", &A[i]);
}
    for (int i = 0; i < MAX; i++) {
        printf("%f\n", A[i]);
    }
    return 0;
}