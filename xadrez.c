#include <stdio.h>

//FUNÇÃO RECURSIVA DA PEÇA BISPO

//a qtd de movimento é passada como argumento quando a funcao moverBispo(); é chamada 
//e recebida como parâmetro aqui, ex: moverBispo(5);
void moverBispo(int movimentosBispo){
    if (movimentosBispo > 0){
        printf(" DIAGONAL Á DIREITA.\n");
        //decrementa um movimento até chegar em 0
        moverBispo(movimentosBispo - 1);
    }
}

void moverTorre(int movimentosTorre){
    if(movimentosTorre > 0){
        printf("DIREITA\n");
        moverTorre(movimentosTorre - 1);
    }
}

void moverRainha(int movimentosRainha){
    if(movimentosRainha > 0){
        printf("ESQUERDA\n");
        moverRainha(movimentosRainha - 1);
    }
}



// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças [Feito!]
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover. [Feito!]
    int bispo = 1;
    int rainha = 1;
    int movimentoCavalo = 1;
    

    // Implementação de Movimentação do Bispo [Feito!]
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal. [Feito!]
    while (bispo <= 5)
    {
        printf("Movendo Bispo á [%dª] casa para diagonal á direita..\n", bispo);
        bispo++;
    }
    printf("\n\n\n\n");
    

    // Implementação de Movimentação da Torre [Feito!]
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita. [Feito!]
    for (int torre = 1; torre <= 5; torre++)
    {
        printf("Movendo a Torre para [%dª] casa á direita..\n", torre);
    }
    printf("\n\n\n\n");
    

    // Implementação de Movimentação da Rainha [Feito!]
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda. [Feito!]
    do
    {
        printf("Movendo a Rainha para [%dª] casa á esquerda..\n", rainha);
        rainha++;

    } while (rainha <= 8);
    printf("\n\n\n\n");
    

    // Nível Aventureiro - Movimentação do Cavalo [Feito!]
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L. [Feito!]
    // Um loop pode representar a movimentação horizontal e outro vertical. [Feito!]
    int jogar = 4;
    while (jogar >= 1)
    {

        printf("Você tem %d jogada(s).\n", jogar);
        int opcao = 0;
        printf("Escolha o movimento do cavalo:\n");
        printf("[1] - ESQUERDA/ESQUERDA/CIMA\n");
        printf("[2] - BAIXO/BAIXO/DIREITA\n");
        printf("[3] - DIREITA/DIREITA/BAIXO\n");
        printf("[4] - CIMA/CIMA/DIREITA\n");

        scanf("%d", &opcao);
        getchar();

        if (opcao == 1)
        {

            int movimentoCavalo1 = 1;
            while (movimentoCavalo1 <= 1)
            {
                printf("\n");
                for (int j = 1; j <= 2; j++)
                {
                    printf("Cavalo: Esquerda! \n");
                }
                printf("Cima!\n");
                movimentoCavalo1++;
            }
            printf("\n\n");
        }
        else if (opcao == 2)
        {
            int movimentoCavalo2 = 1;
            while (movimentoCavalo2 <= 1)
            {

                printf("\n");
                for (int j = 1; j <= 2; j++)
                {
                    printf("Cavalo: Pra baixo! \n");
                }
                printf("Direita!\n");
                movimentoCavalo2++;
            }
            printf("\n\n");
        }
        else if (opcao == 3)
        {
            int movimentoCavalo3 = 1;
            while (movimentoCavalo3 <= 1)
            {

                printf("\n");
                for (int j = 1; j <= 2; j++)
                {
                    printf("Cavalo: Direita! \n");
                }
                printf("Baixo!\n");
                movimentoCavalo3++;
            }
            printf("\n\n");
        }
        else if (opcao == 4)
        {
            int movimentoCavalo4 = 1;
            while (movimentoCavalo4 <= 1)
            {

                printf("\n");
                for (int j = 1; j <= 2; j++)
                {
                    printf("Cavalo: Cima! \n");
                }
                printf("Direita!\n");
                movimentoCavalo4++;
            }
            printf("\n\n");
        }
        else
        {
            printf("!!!!!! OPÇÃO INVÁLIDA !!!!!!!\n\n");
            continue;
            

        }

        jogar--;
    }
    printf("****** ACABARAM SUAS JOGADAS ******\n\n\n\n\n");
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados



    // Sugestão: Substitua as movimentações das peças por funções recursivas. [Feito!]
    // Exemplo: Crie uma função recursiva para o movimento do Bispo. [Feito!]

    /*
   
    void moverBispo(int movimentosBispo){
        if (movimentosBispo > 0){
            printf(" DIAGONAL Á DIREITA.\n");
            //decrementa um movimento até chegar em 0
            moverBispo(movimentosBispo - 1);
        }
    }

    void moverTorre(int movimentosTorre){
        if(movimentosTorre > 0){
            printf("DIREITA\n");
            moverTorre(movimentosTorre - 1);
        }
    }

    void moverRainha(int movimentosRainha){
        if(movimentosRainha > 0){
            printf("ESQUERDA\n");
            moverRainha(movimentosRainha - 1);
        }
    }
        
    */
    printf("------EXECUTANDO O MOVIMENTO DE TODAS AS PEÇAS COM FUNÇÃO RECURSIVA------\n\n");

    moverBispo(5); //chamando a função recursiva de moverBispo() declarada antes do int main()
    printf("\n\n");
    moverTorre(5); //chamando a função recursiva de moverTorre() declarada antes do int main()
    printf("\n\n");
    moverRainha(8); //chamando a função recursiva de moverRainha() declarada antes do int main()




    

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.  
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
