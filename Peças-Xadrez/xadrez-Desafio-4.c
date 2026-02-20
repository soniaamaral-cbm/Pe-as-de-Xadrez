#include <stdio.h>

/* Protótipos das funções */
void moverTorre(int casas);
void moverBispo(int casas);
void moverRainha(int casas);
void moverCavalo();

/* TORRE */
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

/* BISPO */
void moverBispo(int casas) {
    if (casas <= 0) return;

    for (int v = 0; v < 1; v++) {
        for (int h = 0; h < 1; h++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

/* RAINHA */
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/* CAVALO */
void moverCavalo() {

    int casasCima = 2;
    int casasDireita = 1;

    for (int i = 0; i < casasCima; i++) {
        printf("Cima\n");
    }

    for (int j = 0; j < casasDireita; j++) {
        printf("Direita\n");
    }
}

/* MAIN */
int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("=== Movimento da Torre ===\n");
    moverTorre(casasTorre);

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(casasBispo);

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(casasRainha);

    printf("\n=== Movimento do Cavalo ===\n");
    moverCavalo();

    /* Comparação simples */
    int escolha;

    printf("\nEscolha qual peças você deseja continuar:\n");
    printf("1 - Torre\n");
    printf("2 - Rainha\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Você escolheu Torre!\n");
            break;

        case 2:
            printf("Você escolheu Rainha!\n");
            break;

        default:
            printf("Opção inválida\n");
    }

    return 0;
}