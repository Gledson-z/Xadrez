#include <stdio.h>

int main()
{
    // Move a torre 5 casas para a direita
    printf("\nTorre move 5 casas para a direita.\n");

    for (int T = 0; T < 5; T++)
    {
        printf("Direita\n");
    }

    // Move o bispo 5 casas na diagonal para cima e à direita
    printf("\nBispo move 5 casas na diagonal para cima e à direita.\n");

    int B = 0;
    while (B < 5)
    {
        printf("Cima, Direita\n");
        B++;
    }

    // Move a rainha 8 casas para a esquerda
    printf("\nRainha move 8 casas para a esquerda.\n");

    int R = 0;
    do
    {
        printf("Esquerda\n");
        R++;
    } while (R < 8);

    // Move o cavalo em L (move 2 casas em uma direção (horizontal ou vertical) e depois 1 casa perpendicularmente)
    printf("\nCavalo move-se em L 2 casas para baixo 1 para a direita.\n");

    int movimentoL = 1; // Quantidade de movimentos em L
    while (movimentoL--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }
        printf("Direita\n");
    }

    return 0;
}