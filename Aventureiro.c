#include <stdio.h>

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0}; 

    for (int i = 0; i <= 1; i++) {
        tabuleiro[i][3] = 3;
    }

    for (int j = 6; j <= 7; j++) {
        tabuleiro[9][j] = 3;
    }

    for (int i = 0; i < 10; i++) {
        if (tabuleiro[i][i] == 0) {
            tabuleiro[i][i] = 3;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (tabuleiro[i][9 - i] == 0) { 
            tabuleiro[i][9 - i] = 3; 
        } 
    }

    for (int j = 0; j < 2; j++) {  
        if (tabuleiro[j + 3][j] == 0) { 
            tabuleiro[j + 3][j] = 3; 
        } 
    }

    for (int i = 0; i < 2; i++) {
        if (tabuleiro[i + 3][9 - i] == 0) { 
            tabuleiro[i + 3][9 - i] = 3; 
        } 
    }

    // Imprimir letras do topo
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", linha[j]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d|", i + 1);
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
