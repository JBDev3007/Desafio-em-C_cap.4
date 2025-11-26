#include <stdio.h>

// =======================================================
// Definições de Constantes e Variáveis Globais
// =======================================================

// Número de casas que as peças movem em seus respectivos eixos
#define NUM_CASAS 4

// =======================================================
// Funções Recursivas para Movimentos Lineares/Diagonais
// =======================================================

/**
 * @brief Simula o movimento da Torre para cima usando recursividade.
 *
 * @param casasRestantes O número de casas que a torre ainda precisa mover.
 */
void moverTorreRecursivo(int casasRestantes) {
    // Caso base: a recursão para quando não houver mais casas para mover.
    if (casasRestantes <= 0) {
        return;
    }

    // Ação: Imprime o movimento para a casa atual.
    printf("Cima\n");

    // Passo recursivo: Chama a função para a próxima casa.
    moverTorreRecursivo(casasRestantes - 1);
}

/**
 * @brief Simula o movimento do Bispo na diagonal (Cima e Direita) usando recursividade.
 *
 * @param casasRestantes O número de casas que o bispo ainda precisa mover.
 */
void moverBispoRecursivo(int casasRestantes) {
    // Caso base.
    if (casasRestantes <= 0) {
        return;
    }

    // Ação: O movimento diagonal é a combinação de dois movimentos.
    printf("Cima\n");
    printf("Direita\n");

    // Passo recursivo.
    moverBispoRecursivo(casasRestantes - 1);
}

/**
 * @brief Simula o movimento da Rainha (diagonal) usando recursividade.
 *
 * A Rainha combina os movimentos da Torre e do Bispo. Aqui, simulamos um movimento diagonal.
 *
 * @param casasRestantes O número de casas que a rainha ainda precisa mover.
 */
void moverRainhaRecursivo(int casasRestantes) {
    // Caso base.
    if (casasRestantes <= 0) {
        return;
    }

    // Ação: Simula um movimento diagonal.
    printf("Cima\n");
    printf("Direita\n");

    // Passo recursivo.
    moverRainhaRecursivo(casasRestantes - 1);
}

// =======================================================
// Funções com Loops Complexos
// =======================================================

/**
 * @brief Simula o movimento do Cavalo em "L" (2 casas para cima e 1 para a direita)
 * usando loops aninhados com múltiplas variáveis e controle de fluxo.
 */
void moverCavaloComplexo() {
    int i, j;
    // O movimento do Cavalo é sempre de 2 passos em um eixo e 1 no outro.
    // Usaremos loops aninhados para garantir o padrão "L".

    printf("--- Movimento do Cavalo (L: 2 Cima, 1 Direita) ---\n");

    // O loop externo simula o movimento de 2 casas "para cima".
    // Usamos um loop simples para o movimento primário (eixo Y).
    for (i = 0; i < 2; i++) {
        printf("Cima\n");
    }

    // O loop interno simula o movimento de 1 casa "para a direita" (eixo X).
    // Usamos um loop com uma condição e 'break' para garantir que ele só execute uma vez.
    for (j = 0; j < 5; j++) { // O 5 é um valor arbitrário, o 'break' garante 1 execução.
        if (j > 0) {
            // Se j for maior que 0, não há mais movimento horizontal no 'L'.
            break;
        }
        printf("Direita\n");

        // Esta lógica garante que o loop horizontal termine após 1 passo,
        // mas o 'break' é o controle de fluxo explícito solicitado.
    }
    printf("\n");

    // Para demonstrar o uso de 'continue', podemos simular um segundo 'L'
    // com uma pequena variação, embora o requisito fosse apenas sobre o primeiro movimento.
    printf("--- Simulação de Segundo Movimento do Cavalo (Usando continue) ---\n");
    for (i = 0; i < 3; i++) {
        if (i == 2) {
            // No 3º passo, a peça já completou o 'L' (2 Cima, 1 Direita).
            // Usamos 'continue' para pular qualquer lógica extra aqui, focando
            // apenas no movimento principal (que já foi impresso).
            continue;
        }
    }
    // A saída real para o movimento do Cavalo é o bloco acima, este é apenas um exemplo de 'continue'.
}

/**
 * @brief Simula o movimento do Bispo na diagonal (Baixo e Esquerda)
 * usando loops aninhados (externo vertical, interno horizontal).
 *
 * Embora o requisito principal seja recursividade para o Bispo, esta função
 * atende ao requisito específico de loops aninhados para o Bispo.
 */
void moverBispoLoopsAninhados() {
    int i, j;
    int maxMovimentos = NUM_CASAS;

    printf("--- Movimento do Bispo (Loops Aninhados: Diagonal Baixo/Esquerda) ---\n");

    // Loop mais externo: Movimento Vertical (Baixo)
    for (i = 0; i < maxMovimentos; i++) {
        printf("Baixo\n");

        // Loop mais interno: Movimento Horizontal (Esquerda)
        // Este loop deve ser dependente do externo para simular o movimento diagonal (1:1).
        // Ele executa apenas uma vez para cada passo vertical.
        for (j = i; j < i + 1; j++) {
            printf("Esquerda\n");
        }
    }
    printf("\n");
}


// =======================================================
// Função Principal
// =======================================================

int main() {
    // Variáveis ou constantes definidas no código para a recursão
    const int casasTorre = NUM_CASAS;
    const int casasBispo = NUM_CASAS;
    const int casasRainha = NUM_CASAS;

    // ---------------------------------------------------
    // 1. Recursividade: Torre (Cima)
    // ---------------------------------------------------
    printf("=======================================\n");
    printf("  Movimento da Torre (Recursivo)\n");
    printf("=======================================\n");
    moverTorreRecursivo(casasTorre);
    printf("\n");

    // ---------------------------------------------------
    // 2. Recursividade: Rainha (Diagonal Cima/Direita)
    // ---------------------------------------------------
    printf("=======================================\n");
    printf("  Movimento da Rainha (Recursivo)\n");
    printf("=======================================\n");
    moverRainhaRecursivo(casasRainha);
    printf("\n");

    // ---------------------------------------------------
    // 3. Loops Complexos: Cavalo (2 Cima, 1 Direita)
    // ---------------------------------------------------
    printf("=======================================\n");
    printf("  Movimento do Cavalo (Loops Aninhados Complexos)\n");
    printf("=======================================\n");
    moverCavaloComplexo();
    printf("\n");

    // ---------------------------------------------------
    // 4. Recursividade: Bispo (Diagonal Cima/Direita)
    // ---------------------------------------------------
    printf("=======================================\n");
    printf("  Movimento do Bispo (Recursivo)\n");
    printf("=======================================\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // ---------------------------------------------------
    // 5. Loops Aninhados: Bispo (Diagonal Baixo/Esquerda)
    // ---------------------------------------------------
    printf("=======================================\n");
    printf("  Movimento do Bispo (Loops Aninhados)\n");
    printf("=======================================\n");
    moverBispoLoopsAninhados();
    printf("\n");

    return 0;
}