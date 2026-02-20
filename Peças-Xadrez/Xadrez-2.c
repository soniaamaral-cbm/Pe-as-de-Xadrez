#include <stdio.h> 
 
/* Protótipos das funções */ 
void moverTorre(int casas); 
void moverBispo(int casas); 
void moverRainha(int casas); 
void moverCavalo(); 
 
 
/* 
======================================== 
FUNÇÃO RECURSIVA — TORRE 
Move várias casas para a direita 
======================================== 
*/ 
void moverTorre(int casas) { 
 
    if (casas <= 0) { 
        return; // condição de parada 
    } 
 
    printf("Direita\n"); 
 
    moverTorre(casas - 1); // chamada recursiva 
} 
 
 
/* 
======================================== 
FUNÇÃO RECURSIVA + LOOPS ANINHADOS — BISPO 
Movimento diagonal: Cima + Direita 
======================================== 
*/ 
void moverBispo(int casas) { 
 
    if (casas <= 0) { 
        return; 
    } 
 
    // loops aninhados (externo vertical, interno horizontal) 
    for (int v = 0; v < 1; v++) { 
        for (int h = 0; h < 1; h++) { 
            printf("Cima Direita\n"); 
        } 
    } 
 
    moverBispo(casas - 1); 
} 
 
 
/* 
======================================== 
FUNÇÃO RECURSIVA — RAINHA 
Move várias casas para a esquerda 
======================================== 
*/ 
void moverRainha(int casas) { 
 
    if (casas <= 0) { 
        return; 
    } 
 
    printf("Esquerda\n"); 
 
    moverRainha(casas - 1); 
} 
 
 
/* 
======================================== 
LOOPS COMPLEXOS — CAVALO 
Movimento em L: 
2 casas para cima 
1 casa para direita 
======================================== 
*/ 
void moverCavalo() { 
 
    int casasCima = 2; 
    int casasDireita = 1; 
 
    // movimento vertical 
    for (int i = 0; i < casasCima; i++) { 
 
        printf("Cima\n"); 
 
        // uso de continue (exemplo de controle) 
        if (i == 1) { 
            continue; 
        } 
    } 
 
    // movimento horizontal 
    for (int j = 0; j < casasDireita; j++) { 
 
        printf("Direita\n"); 
 
        // uso de break 
        break; 
    } 
} 
 
 
/* 
======================================== 
FUNÇÃO PRINCIPAL 
======================================== 
*/ 
int main() { 
 
    int casasTorre = 5; 
    int casasBispo = 5; 
    int casasRainha = 8; 
 
    printf("=== Movimento da Torre ===\n"); 
    moverTorre(casasTorre); 
 
    printf("\n"); 
 
    printf("=== Movimento do Bispo ===\n"); 
    moverBispo(casasBispo); 
 
    printf("\n"); 
 
    printf("=== Movimento da Rainha ===\n"); 
    moverRainha(casasRainha); 
 
    printf("\n"); 
 
    printf("=== Movimento do Cavalo ===\n"); 
    moverCavalo(); 
 
    return 0; 
} 