#include <stdio.h>

// Funções Recursivas para o Nível Mestre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Bispo recursivo (apenas para exemplo, o desafio pede loop aninhado abaixo)
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}

int main() {
    // 1. Torre (Recursivo): 5 casas
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // 2. Bispo (Loops Aninhados): 5 casas
    printf("\nMovimento do Bispo:\n");
    for (int i = 0; i < 5; i++) { // Vertical
        for (int j = 0; j < 1; j++) { // Horizontal (simulado em 1 passo por vez)
            printf("Cima, Direita\n");
        }
    }

    // 3. Rainha (Recursivo): 8 casas
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // 4. Cavalo (Loops Complexos): 2 para cima, 1 para a direita
    // Usando múltiplas variáveis e condições no loop
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0, j = 0; i < 2; i++) { // Loop complexo com variáveis i e j
        while (j < 1) {
            printf("Cima\n");
            j++;
        }
        printf("Cima\n"); // Segunda casa para cima
        printf("Direita\n"); // Uma para a direita
        break; // Sai para garantir apenas um movimento em L
    }

    return 0;
}
