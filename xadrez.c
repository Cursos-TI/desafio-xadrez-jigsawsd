#include <stdio.h>

int main() {
    // --- NÍVEL NOVATO ---
    
    // Torre: 5 casas à direita
    printf("Movimento da *Torre*:\n");
    for(int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Bispo: 5 casas diagonal (Cima, Direita)
    printf("\nMovimento do *Bispo*:\n");
    int b = 0;
    while(b < 5) {
        printf("Cima, Direita\n");
        b++;
    }

    // Rainha: 8 casas à esquerda
    printf("\nMovimento da *Rainha*:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while(r < 8);

    // --- NÍVEL AVENTUREIRO ---

    // Cavalo: 2 para baixo e 1 para a esquerda
    // Usando loops aninhados: um 'for' e um 'while'
    printf("\nMovimento do *Cavalo*:\n");
    
    for (int i = 1; i <= 1; i++) { // Loop externo (executa 1 vez o movimento completo)
        int j = 0;
        while (j < 2) { // Loop interno para as 2 casas para baixo
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n"); // Completa o L
    }

    return 0;
}
