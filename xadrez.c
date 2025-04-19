#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças [Feito!]
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 1;
    int rainha = 1;

    // Implementação de Movimentação do Bispo [Feito!]
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    while (bispo <= 5){
        printf("Movendo Bispo á [%dª] casa para diagonal á direita..\n", bispo );
        bispo++;
    }
    printf("\n\n\n\n");
    // Implementação de Movimentação da Torre [Feito!]
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    for (int torre = 1; torre <= 5; torre++)
    {
        printf("Movendo a Torre para [%dª] casa á direita..\n", torre);
    }
    printf("\n\n\n\n");

    // Implementação de Movimentação da Rainha [Feito!]
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    do
    {
        printf("Movendo a Rainha para [%dª] casa á esquerda..\n", rainha);
        rainha++;

    } while (rainha <= 8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.






    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
