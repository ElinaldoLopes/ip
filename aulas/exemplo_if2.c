#include <stdio.h>
#include <stdbool.h>

int main() {
    float n1, n2, n3, md;

    printf("digite a nota 1: ");
    scanf("%f", &n1);
    printf("digite a nota 2: ");
    scanf("%f", &n2);
    printf("digite a nota 3: ");
    scanf("%f", &n3);

    if (n1 >= 6)
    {
        if (n2 >= 6)
        {
            if (n3 >= 6)
            {
                md = (n1+n2+n3);
                printf("A media eh %.2f\n",md);
            }
            
        }
        
    }
    printf("FIM!\n");
    
    return 0;
}