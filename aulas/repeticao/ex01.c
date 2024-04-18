#include <stdio.h>

int main() {
    int a, cont=10, i;
    char r;
    while (r != '0')
    {
        printf("digite (W) para while\n(F) para for\n(D) para do while\ne (0) para sair\n");
        scanf("%c", &r);
        if (r == 'W')
        {
                while (i < 10)
            {
                printf("digite %i o numero\n", i);
                scanf("%i", &a);
                printf("%i\n", a);
                i++;
            }
            }
            else if (r == 'D')
            {
                do
            {
                printf("digite %i o numero\n", i);
                scanf("%i", &a);
                printf("%i\n", a);
                i++;
            } while (i < 10);
            }
            else if (r == 'F')
            {
            for (i = 0; i < cont; i++)
            {
                printf("digite %i o numero\n", i);
                scanf("%i", &a);
                printf("%i\n", a);
                i++;
            }
        }
    }
}