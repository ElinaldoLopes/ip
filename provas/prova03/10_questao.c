/*(vale 1,0) Uma revenda de automóveis armazena os dados relativos aos carros
disponíveis para venda em uma matriz multidimensional. As dimensões dessa matriz
e os índices utilizados em cada dimensão são:
a. Código de identificação do carro, com índice inteiro, de 1 a 50.
b. modelo do carro, com índice tipo enumeração (modA, modB, modC, modD,
modE).
c. Cor, índice tipo enumeração (branca, prata, vermelho, azul, verde, preto).
d. Ano de fabricação, índice tipo enumeração (2009, 2010, 2011).
e. Combustível, índice tipo enumeração (gasolina, álcool, flex).
O conteúdo da matriz é o preço de cada um dos automóveis identificado pelos itens
que constituem as dimensões. Escreva um programa que inicie preenchendo, a partir de
leituras do teclado, todos os dados dessa matriz. Em seguida, o programa deve responder a
uma série de consultas, lendo os dados que identificam cada automóvel e informando o seu
preço. Crie u*/
#include <stdio.h>
enum mod{
    modA, modB, modC, modD, modE
};
enum cor{
    branco, prata, vermelho, azul, verde, preto
};
enum ano{
    _2009, _2010, _2011
};
enum combustivel{
    gasolina, alcool, flex
};
#define IDE 50

void linha() {
    printf("\n=======================================================================================================================================================\n");
}

int main() {
    float car[IDE][modE+1][preto+1][_2011+1][flex+1];
    int i, ID, cont=0;
    enum mod m;
    enum cor c;
    enum ano a;
    enum combustivel co;
    
    for(i = 0; i < IDE; i++){
        for(m = modA; m <= modE; m++){
            for(c = branco; c <= preto; c++){
                for(a = _2009; a <= _2011; a++){
                    for(co = gasolina; co <= flex; co++){
                        car[i][m][c][a][co] = (float)rand() / (100000.0 - 10000.0 +1.0) + 10000.0; 
                    }
                }
            }
        }
    }

    /*use os preços gerados aleatoriamente ou se divirta digitando o preço de cada um dos 11250 carros maunalmente
    for(i = 0; i < IDE; i++){
        for(m = modA; m <= modE; m++){
            for(c = branco; c <= preto; c++){
                for(a = _2009; a <= _2011; a++){
                    for(co = gasolina; co <= flex; co++){
                        cont++;
                        printf("digite o preço do %d carro: ", cont);
                        scanf("%f", &car[i][m][c][a][co]);
                    }
                }
            }
        }
    }*/

    int M, C, A, CO;
    printf("id [1-50]: ");
    scanf("%d", &ID);
    linha();
    printf("modelo [0-modA, 1-modB, 2-modC, 3-modD, 4-modE]: ");
    scanf("%d", &M);
    m = (enum mod)M;
    linha();
    printf("cor [0-branco, 1-prata, 2-vermelho, 3-azul, 4-verde, 5-preto]: ");
    scanf("%d", &C);
    c = (enum cor)C;
    linha();
    printf("ano [0-_2009, 1-_2010, 2-_2011]: ");
    scanf("%d", &A);
    a = (enum ano)A;
    linha();
    printf("combustivel [0-gasolina, 1-alcool, 2-flex]: ");
    scanf("%d", &CO);
    co = (enum combustivel)CO;
    linha();
    printf("Preco: R$:%.2f\n", car[ID-1][m][c][a][co]);
    return 0;

}
