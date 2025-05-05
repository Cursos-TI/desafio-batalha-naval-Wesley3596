#include <stdio.h>

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0}; // Inicializa tudo com 0

    //tabuleiro[linha][coluna] → tabuleiro[y][x]

// (i) = -> linha
// (j) = -> coluna

    // preenchimento com valor 3 
    tabuleiro[1][3] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[3][3] = 3;
    tabuleiro[4][6] = 3;
    tabuleiro[4][7] = 3;
    tabuleiro[4][8] = 3;

    
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", linha[j]);
    }
    printf("\n");

    

    // Impressão das linhas do tabuleiro com numeração
    for (int i = 0; i < 10; i++) {
        // Alinhamento dos números de 1 a 10
        if (i < 9)
            printf(" %d", i + 1);
        else
            printf("%d", i + 1);

        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}