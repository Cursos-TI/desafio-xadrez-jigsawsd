#include <stdio.h>

int main() {
    
    /* Movimento da Torre: 5 casas à direita usando laço for
    O for tem inicialização, condição e incremento em uma linha */

    printf("Movimento da Torre:\n");
    for(int passo = 0; passo < 5; passo++) {
        printf("Direita\n");
    }

    /* Movimento do Bispo: 5 casas na diagonal usando laço while
    O while verifica a condição antes de cada repetição */

    printf("\nMovimento do Bispo:\n");
    int passo_bispo = 0;
    while(passo_bispo < 5) {
        printf("Cima, Direita\n");
        passo_bispo++;
    }

    /* Movimento da Rainha: 8 casas à esquerda usando laço do-while
    O do-while executa pelo menos uma vez e verifica depois */
    
    printf("\nMovimento da Rainha:\n");
    int passo_rainha = 0;
    do {
        printf("Esquerda\n");
        passo_rainha++;
    } while(passo_rainha < 8);

    return 0;
}
