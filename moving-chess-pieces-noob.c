#include <stdio.h>

int main()
{

    int options;

    printf("-= Bem vindo ao jogo movimentar peças de xadrez =-\n");

    do
    {

        // Exibe os dados 
        printf("-= Menu =-\n");
        printf("-= 1. Regras.\n");
        printf("-= 2. Iniciar.\n");
        printf("-= 3. Sair.\n");
        printf("Escolha uma alternativa: ");
        scanf("%d", &options);

        switch (options)
        {
        case 1:
            printf("-=-=-=-=-=-=-=-=-=-=-=-\n");
            printf("-= Movimentação das peças: \n");
            printf("-= Bispo: 5 casas na diagonal superior direita\n");
            printf("-= Torre: 5 casas para a direita\n");
            printf("-= Rainha: 8 casas para a esquerda\n");

            // Pausa a execução.
            printf("Preciona ENTER para continuar. \n");
            getchar();
            getchar();

            break;
        case 2:
            int piece, bishop, rook, queen;

            do
            {
                printf("-=-=-=-=-=-=-=-=-=-=-=-\n");
                printf("-= Peças disponíveis: \n");
                printf("1. Bispo.\n");
                printf("2. Torre.\n");
                printf("3. Rainha.\n");
                printf("4. Sair.\n");

                printf("Escolha uma alternativa: ");
                scanf("%d", &piece);

                switch (piece)
                {
                case 1:
                    /* Bispo while*/
                    bishop = 0;
                    while (bishop < 5)
                    {
                        printf("Cima\n");
                        printf("Direita\n");
                        bishop++;
                    }

                    break;
                case 2:
                    /* Torre do-while*/
                    rook = 0;
                    do
                    {
                        printf("Direita\n");
                        rook++;
                    } while (rook < 5);

                    break;
                case 3:
                    /* Rainha for*/
                    for (queen = 0; queen < 8; queen++)
                    {
                        printf("Esqueda\n");
                    }

                    break;
                case 4:
                    printf("Saindo...\n");
                    break;
                default:
                    printf("Alternativa inválida...\n");
                    break;
                }
            } while (piece != 4);

            break;
        case 3:
            /* sair */
            printf("Saindo...\n");
            break;
        default:
            printf("Alternativa inválida...\n");
            break;
        }

    } while (options != 3);

    return 0;
}