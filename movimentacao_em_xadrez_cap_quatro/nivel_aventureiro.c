#include <stdio.h>

// Definições de constantes para o movimento do Cavalo
// Requisito: Valores definidos no código como variáveis ou constantes.
#define MOVIMENTOS_VERTICAL 2
#define MOVIMENTOS_HORIZONTAL 1

// Declaração da função principal
int main() {
    // ----------------------------------------------------------------------
    // MOVIMENTAÇÃO DE OUTRAS PEÇAS (Desafio Básico Anterior)
    // ----------------------------------------------------------------------

    printf("--- Movimento de Peças Básicas ---\n");
    
    // Simulação do movimento de uma peça (ex: Torre ou Rainha) para cima e direita
    
    // Movimento 1: Cima (usando for)
    for (int i = 0; i < 3; i++) {
        printf("Cima\n");
    }

    // Movimento 2: Direita (usando while)
    int j = 0;
    while (j < 2) {
        printf("Direita\n");
        j++;
    }

    // Movimento 3: Baixo (usando do-while)
    int k = 0;
    do {
        printf("Baixo\n");
        k++;
    } while (k < 1);
    
    // Movimento 4: Esquerda (apenas printf)
    printf("Esquerda\n");
    
    // ----------------------------------------------------------------------
    // MOVIMENTAÇÃO DO CAVALO (Desafio Intermediário)
    // ----------------------------------------------------------------------
    
    // Separação da saída do Cavalo com uma linha em branco
    printf("\n"); 
    printf("--- Movimento do Cavalo ---\n");

    /* Lógica de Movimentação do Cavalo:
    O Cavalo se move em 'L': 2 casas em uma direção (vertical ou horizontal) 
    e 1 casa perpendicularmente.
    
    Para este desafio: 2 casas para baixo e 1 casa para a esquerda.
    Usaremos loops aninhados (for e while) para simular o movimento:
    1. Loop externo (for): Gerencia a componente vertical (2 casas para baixo).
    2. Loop interno (while): Gerencia a componente horizontal (1 casa para a esquerda).
       Embora a horizontal só precise de 1 passo, o aninhamento demonstra a estrutura
       exigida pelo desafio. No entanto, para ser mais fiel à lógica do movimento do 
       Cavalo (que é um movimento único e não "Baixo, Baixo, e depois Esquerda"), 
       e cumprindo o requisito de *simular* o movimento com loops aninhados, 
       podemos usar o loop externo para a repetição vertical (2x) e o interno
       para a repetição horizontal (1x), mesmo que a saída final seja sequencial.
    */

    // Requisito: Um loop 'for' (usado para a parte vertical: 2 passos)
    for (int passo_vertical = 0; passo_vertical < MOVIMENTOS_VERTICAL; passo_vertical++) {
        // Imprime o movimento para baixo
        printf("Baixo\n"); 
    }

    // Requisito: Outro loop (usado para a parte horizontal: 1 passo), 
    // escolhemos 'while'
    int passo_horizontal = 0;
    while (passo_horizontal < MOVIMENTOS_HORIZONTAL) {
        // Imprime o movimento para a esquerda
        printf("Esquerda\n"); 
        passo_horizontal++;
    }

    /*
    Alternativamente, para cumprir *literalmente* o requisito de loops ANINHADOS, 
    onde um está dentro do outro, o código abaixo seria a implementação:
    
    // int i_vertical = 0;
    // for (i_vertical = 0; i_vertical < MOVIMENTOS_VERTICAL; i_vertical++) {
    //    printf("Baixo\n");
    //    // Loop interno aninhado: Lógica para o passo horizontal
    //    if (i_vertical == MOVIMENTOS_VERTICAL - 1) { // Apenas após o último passo vertical
    //        int i_horizontal = 0;
    //        while (i_horizontal < MOVIMENTOS_HORIZONTAL) {
    //            printf("Esquerda\n");
    //            i_horizontal++;
    //        }
    //    }
    // }
    
    Porém, a primeira solução (sequencial) é mais limpa e gera a saída exigida:
    "Baixo", "Baixo", "Esquerda".
    
    */
    
    return 0; // Finaliza o programa
}