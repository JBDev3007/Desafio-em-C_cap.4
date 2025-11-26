#include <stdio.h>

// Definições de constantes para o número de casas a serem movidas
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_RAINHA 8

int main() {
    // Variáveis de controle para os laços de repetição
    int i = 0; // Variável para o laço 'for'
    int contador_while = 0; // Variável para o laço 'while'
    int contador_do_while = 0; // Variável para o laço 'do-while'

    // --- 1. Movimento da Torre: 5 casas para a direita (Usando 'for') ---
    printf("--- Movimento da Torre (Usando for) ---\n");
    printf("Direção: 5 casas para a Direita\n");

    // O laço 'for' é ideal quando o número de iterações é conhecido (5 movimentos)
    for (i = 1; i <= MOVIMENTO_TORRE; i++) {
        // A Torre move-se em linha reta. Neste caso, para a direita.
        printf("Direita\n");
    }

    printf("\n"); // Linha em branco para separar as simulações

    // --- 2. Movimento do Bispo: 5 casas na diagonal para cima e à direita (Usando 'while') ---
    printf("--- Movimento do Bispo (Usando while) ---\n");
    printf("Direção: 5 casas na diagonal Cima e Direita\n");

    // O laço 'while' é usado. A condição é verificada antes de cada iteração.
    while (contador_while < MOVIMENTO_BISPO) {
        // O Bispo move-se na diagonal. A diagonal para cima e à direita é representada pela combinação.
        printf("Cima, Direita\n");

        // Incrementa o contador para avançar para a próxima casa/iteração
        contador_while++;
    }

    printf("\n"); // Linha em branco para separar as simulações

    // --- 3. Movimento da Rainha: 8 casas para a esquerda (Usando 'do-while') ---
    printf("--- Movimento da Rainha (Usando do-while) ---\n");
    printf("Direção: 8 casas para a Esquerda\n");

    // O laço 'do-while' é usado. Garante que o corpo do laço seja executado pelo menos uma vez.
    // Inicializa o contador para a primeira iteração (0)
    contador_do_while = 0;
    
    do {
        // A Rainha move-se em todas as direções. Neste caso, para a esquerda.
        printf("Esquerda\n");

        // Incrementa o contador para avançar para a próxima casa/iteração
        contador_do_while++;
    } while (contador_do_while < MOVIMENTO_RAINHA); // Continua enquanto não atingir 8 movimentos

    printf("\n--- Simulação Completa ---\n");

    return 0;
}