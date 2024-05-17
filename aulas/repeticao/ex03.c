#include <stdio.h>
int main() {
    float dividendo=70.0, divisor=7.0, res=0.0, test, div;
    int i=0, R=1;
    do
    {
        i++;
        div = dividendo/divisor;
        res += div;
        if (res-test< 0.01)
        {
            R=0;
        }
        test = res;
        dividendo--;
        divisor +=7.0;
    } while(R == 1);
    
    printf("o valor eh %.2f", res);
}