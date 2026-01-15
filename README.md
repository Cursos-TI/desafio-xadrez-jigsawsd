# Xadrez Simples - Movimentos com Laços em C

Programa para iniciantes que simula movimentos das peças Torre, Bispo e Rainha no xadrez usando as três estruturas de repetição em C: `for`, `while` e `do-while`.

## Funcionalidades

- **Torre**: Move 5 casas à direita usando `for`
- **Bispo**: Move 5 casas na diagonal (cima-direita) usando `while`  
- **Rainha**: Move 8 casas à esquerda usando `do-while`

Cada peça imprime a direção do movimento a cada casa percorrida.

## Como Usar

1. Salve o código em um arquivo `xadrez.c`
2. Abra o terminal no mesmo diretório
3. Compile: `gcc xadrez.c -o xadrez`
4. Execute: `./xadrez` (Linux/Mac) ou `xadrez.exe` (Windows)

## Saída Esperada

```
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
```

## Código Fonte

Arquivo principal: `xadrez.c`

```c
#include <stdio.h>

int main() {
    // Torre com for (5 casas direita)
    printf("Movimento da Torre:\n");
    for(int passo = 0; passo < 5; passo++) {
        printf("Direita\n");
    }

    // Bispo com while (5 casas diagonal)
    printf("\nMovimento do Bispo:\n");
    int passo_bispo = 0;
    while(passo_bispo < 5) {
        printf("Cima, Direita\n");
        passo_bispo++;
    }

    // Rainha com do-while (8 casas esquerda)
    printf("\nMovimento da Rainha:\n");
    int passo_rainha = 0;
    do {
        printf("Esquerda\n");
        passo_rainha++;
    } while(passo_rainha < 8);

    return 0;
}


## Tecnologias

- **Linguagem**: C (padrãoo ANSI)
- **Compilador**: GCC
- **Nível**: Novato

## Estrutura do Projeto

```
## Estrutura do Projeto

projeto-xadrez/
- `xadrez.c`     Código principal em C
- `README.md`      Documentação deste projeto
- `Makefile`       Compilação com `make`

```

---

**Desafio criado para aprendizado de estruturas de repetição em C**
