#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.


//RECURSIVA
void MTORRE(int casas) {
    if (casas > 0) {
        printf("DIREITA!\n");
        MTORRE(casas - 1);
    }
    
}
//RECURSIVA + LOOPS ANINHADOS
void MBISPO(int casas) {
    if (casas > 0) {
        for (int p = 0; p < 1; p++) {
            printf("CIMA, ");
        }
        for (int i = 0; i < 1; i++) {
            printf("DIREITA!\n");
        }
        MBISPO(casas - 1);  
             
    }
    
}
//RECURSIVA
void MRAINHA(int casas) {
    if (casas > 0) {
        printf("ESQUERDA!\n");
        MRAINHA(casas - 1);
    }
    
}
//RECURSIVA + LOOPS ANINHADOS
void MCAVALO() {
    int mcima = 2;
    int mdireita = 1;

    for (int i = 0; i < mcima + mdireita; i++) {
        if (i < mcima) {
            printf("CIMA\n");
            continue;
        }
        if (i == mcima) {
            printf("DIRETIA!\n");
            break;
        }
    }
    
}


int main() {

    int option;
   
    do {
        printf("**MENU PEÇAS DE XADREZ**\n");
        printf("ESCOLHA UMA PEÇA PARA QUE SEJA DEMONSTRADO OS SEUS MOVIMENTOS!\n");
        printf("1. TORRE\n");
        printf("2. BISPO\n");
        printf("3. CAVALO\n");
        printf("4. RAINHA\n");
        printf("5. SAIR!\n");
        printf("ESCOLHA UMA OPÇÃO: \n");
        scanf("%d", &option);
       
        switch(option) {
            case 1:
                printf("*---MOVIMENTOS DA PEÇA TORRE---*\n"); 
                MTORRE(5);
                printf("\n");
                break;
            case 2:
                printf("*---MOVIMENTOS DA PEÇA BISPO---*\n"); 
                MBISPO(5);
                printf("\n");
                break;
            case 3:
                printf("*---MOVIMENTOS DA PEÇA CAVALO---*\n");
                MCAVALO();
                printf("\n");
                break;
            case 4:
                printf("*---MOVIMENTOS DA PEÇA RAINHA---*\n");
                MRAINHA(8);
                printf("\n");
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (option != 5);
   
    return 0;
}
