#include <stdio.h>

int main() {

    // Tamanho fixo do tabuleiro
    int tabuleiro[10][10];

    // Variáveis de controle
    int i, j;

    // =========================
    // 1. Inicializar tabuleiro
    // =========================
    // Colocar 0 em todas as posições (água)

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // =========================
    // 2. Criar navios
    // =========================
    // Navios com tamanho fixo 3

    int navio1[3] = {3, 3, 3}; // horizontal
    int navio2[3] = {3, 3, 3}; // vertical

    // Coordenadas iniciais (definidas no código)
    int linha1 = 1, coluna1 = 2; // navio horizontal
    int linha2 = 5, coluna2 = 6; // navio vertical

    // =========================
    // 3. Posicionar navio horizontal
    // =========================

    if(coluna1 + 3 <= 10) {  // verifica limite

        for(i = 0; i < 3; i++) {

            // verifica se já tem navio ali
            if(tabuleiro[linha1][coluna1 + i] == 0) {
                tabuleiro[linha1][coluna1 + i] = navio1[i];
            }
        }
    }

    // =========================
    // 4. Posicionar navio vertical
    // =========================

    if(linha2 + 3 <= 10) {  // verifica limite

        for(i = 0; i < 3; i++) {

            // verifica se já tem navio ali
            if(tabuleiro[linha2 + i][coluna2] == 0) {
                tabuleiro[linha2 + i][coluna2] = navio2[i];
            }
        }
    }

    // =========================
    // 5. Mostrar tabuleiro
    // =========================

    printf("TABULEIRO:\n\n");

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

