#include <stdio.h>

int main() {
    // Número de casas que cada peça irá se mover
    int movimentoTorre = 4;
    int movimentoBispo = 4;
    int movimentoRainha = 6;

    
    // Movimento da Torre - utilizando FOR***
    
    printf("Movimento da Torre:\n");
    printf("A Torre move-se em linha reta. Simulando movimento para a DIREITA:\n");

    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita (casa %d)\n", i);
    }
    printf("\n");

   
    // Movimento do Bispo - utilizando WHILE**
    
    printf("Movimento do Bispo:\n");
    printf("O Bispo move-se na diagonal. Simulando movimento para CIMA e DIREITA:\n");

    int i = 1;
    while (i <= movimentoBispo) {
        printf("Cima Direita (casa %d)\n", i);
        i++;
    }
    printf("\n");

    
    // Movimento da Rainha - utilizando DO-WHILE**
   
    printf("Movimento da Rainha:\n");
    printf("A Rainha move-se em todas as direções. Simulando movimento para a ESQUERDA:\n");

    int j = 1;
    do {
        printf("Esquerda (casa %d)\n", j);
        j++;
    } while (j <= movimentoRainha);

    printf("\nSimulação concluída!\n");

    return 0;
}
