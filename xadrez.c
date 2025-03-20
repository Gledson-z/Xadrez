#include <stdio.h>
int main()
{
    // Move a torre 5 casas para a direita
    printf("Torre move 5 casas para a direita.\n");

    for (int T = 0; T < 5; T++)
    {
        printf("Direita\n");
    }

    // Move o bispo 5 casas na diagonal para cima e à direita
    printf("Bispo move 5 casas na diagonal para cima e à direita.\n");

    int B = 0;
    while (B < 5)
    {
        printf("Cima, Direita\n");
        B++;
    }

    // Move a rainha 8 casas para a esquerda
    printf("Rainha move 8 casas para a esquerda.\n");

    int R = 0;
    do
    {
        printf("Esquerda\n");
        R++;
    } while (R < 8);

    return 0;
}