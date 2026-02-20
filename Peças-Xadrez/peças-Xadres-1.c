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
 
    void main () { 
        //Comparaçao de movimento de Jogo
        
        int moverTorre = 5, moverRainha = 8; 
        char resultado1, resultado2; 
        int atributos1, atributos2; 
            
         // Início do jogo  
    printf("Bem-vindo ao jogo!\n");  
    printf("Escolha o atributo.\n");  
    printf("MoverTorre \n");  
    printf("MoverRainha \n");  
 
    printf("Escolha a comparação:\n ");  
    scanf(" %c", &atributos1);  
  
switch (atributos1){
    case 'MoverTorre': 
    case 'MoverRainha':  
            printf("Você escolheu Mover a Torre!\n");  
            resultado1 = (resultado1 > resultado2) ? 5 : 8;  
        break;  

            printf("Escolha a comparação: ");  
            scanf(" %c", &atributos1); 
    } 
    return 0;
} 
 
//*Comparações de Atributos*//

switch (atributos2) {  
    case 'MoverTorre':  
    case 'MoverRainha':  

            printf("Você escolheu Mover a Rainha!\n");  
            resultado1 = (resultado1 < resultado2) ? 5 : 8;  
        break; 
        printf("Escolha a comparação: ");  
            scanf(" %c", &atributos2);


     // Resultado final 
    if (resultado1 && resultado2) { 
        printf("\nParabéns, você Moveu a Torre!\n"); 

    } else if (resultado1 < resultado2) { 
        printf("\nParabens você Moveu a Rainha!\n"); 
    
    } 
    if (resultado1 && resultado2){
    printf("\nVocê quer continuar jogando?\n"); 
    /* Se a resposta for sim, continua o jogo, mas se for não o jogo finaliza */
}

    return 0;   
 
        
} 