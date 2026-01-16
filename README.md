##Xadrez Simples - Movimentos Complexos em C (Nível Mestre)

Programa avançado que simula os movimentos das peças de xadrez utilizando recursividade, laços aninhados e estruturas complexas de repetição.

Funcionalidades
	•	Torre: Move 5 casas à direita usando Recursividade.
	•	Bispo: Move 5 casas na diagonal usando Loops Aninhados.
	•	Rainha: Move 8 casas à esquerda usando Recursividade.
	•	Cavalo: Move-se em L (2 para cima, 1 para direita) usando Loops Complexos com múltiplas variáveis.

Como Usar
	1.	Salve o código em um arquivo  xadrez.c 
	2.	Abra o terminal no mesmo diretório
	3.	Compile:  gcc xadrez.c -o xadrez 
	4.	Execute:  ./xadrez  (Linux/Mac) ou  xadrez.exe  (Windows)

    Saída Esperada

Movimento da Torre:
Direita (x5)

Movimento do Bispo:
Cima, Direita (x5)

Movimento da Rainha:
Esquerda (x8)

Movimento do Cavalo:
Cima
Cima
Direita

Código Fonte
Arquivo principal:  xadrez.c 

#include <stdio.h>

// Funções Recursivas
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
    // Torre com Recursão
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Bispo com Loops Aninhados
    printf("\nMovimento do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    // Rainha com Recursão
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Cavalo com Loops Complexos
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0, j = 0; i < 2; i++) {
        while (j < 1) {
            printf("Cima\n");
            j++;
        }
        printf("Cima\nDireita\n");
        break;
    }

    return 0;
}

Tecnologias
	•	Linguagem: C (padrão ANSI)
	•	Compilador: GCC / Clang
	•	Nível: Mestre (Recursividade e Laços Aninhados)

Estrutura do Projeto

projeto-xadrez/
├── xadrez.c       # Código principal
├── README.md      # Documentação
└── Makefile       # Compilação automática

**Desafio finalizado para o aprendizado de lógica avançada em C**