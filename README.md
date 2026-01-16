# Xadrez Simples - Movimentos Complexos em C

Programa de nível mestre que simula movimentos das peças Torre, Bispo, Rainha e Cavalo no xadrez usando técnicas avançadas como recursividade e loops aninhados.

## Funcionalidades

- **Torre**: Move 5 casas à direita usando recursividade
- **Bispo**: Move 5 casas na diagonal (cima-direita) usando loops aninhados
- **Rainha**: Move 8 casas à esquerda usando recursividade
- **Cavalo**: Move 3 casas em L (cima-cima-direita) usando loops complexos

Cada peça imprime a direção do movimento a cada casa percorrida.

## Como Usar

1. Salve o código em um arquivo `xadrez.c`
2. Abra o terminal no mesmo diretório
3. Compile: `gcc xadrez.c -o xadrez`
4. Execute: `./xadrez` (Linux/Mac) ou `xadrez.exe` (Windows)

## Saída Esperada

Movimento da Torre:
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo:
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

Movimento da Rainha:
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

Movimento do Cavalo:
Cima
Cima
Direita


## Código Fonte

Arquivo principal: `xadrez.c`

```c
#include <stdio.h>

// Funções recursivas para movimentação
void moverTorre(int n) {
    if (n > 0) {
        printf("Direita\n");
        moverTorre(n - 1);
    }
}

void moverRainha(int n) {
    if (n > 0) {
        printf("Esquerda\n");
        moverRainha(n - 1);
    }
}

int main() {
    // Torre com recursividade (5 casas direita)
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Bispo com loops aninhados (5 casas diagonal)
    printf("\nMovimento do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    // Rainha com recursividade (8 casas esquerda)
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Cavalo com loops complexos (2 cima, 1 direita)
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0, j = 0; i < 1; i++) {
        while (j < 2) {
            printf("Cima\n");
            j++;
        }
        printf("Direita\n");
    }

    return 0;
}

```
Tecnologias
	•	Linguagem: C (padrão ANSI)
	•	Compilador: GCC
	•	Nível: Mestre

Estrutura do Projeto

projeto-xadrez/
│
├── xadrez.c       # Código principal
├── README.md      # Este arquivo
└── makefile       # (opcional) Para compilar automaticamente

**Desafio criado para aprendizado de recursividade e loops complexos em C**