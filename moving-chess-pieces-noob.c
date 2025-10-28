#include <stdio.h>

int main()
{

    int options;

    printf("-= Bem vindo ao jogo movimentar peças de xadrez =-\n");

    do
    {

        // show the options
        printf("-= Menu =-\n");
        printf("-= 1. Regras.\n");
        printf("-= 2. Iniciar.\n");
        printf("-= 3. Sair.\n");
        printf("Escolha uma alternativa: ");
        scanf("%d", &options);

        // menu logic
        switch (options)
        {
        case 1:
            /* basic rules of the moviment of the pieces */

            printf("-=-=-=-=-=-=-=-=-=-=-=-\n");
            printf("-= Movimentação das peças: \n");
            printf("-= Bispo: 5 casas na diagonal superior direita\n");
            printf("-= Torre: 5 casas para a direita\n");
            printf("-= Rainha: 8 casas para a esquerda\n");

            // Stop the execution
            printf("Preciona ENTER para continuar. \n");
            getchar();
            getchar();

            break;
        case 2:
            /* let the user choose what piece he wanna move */
            int piece, bishop, rook, queen, knight;

            do
            {
                printf("-=-=-=-=-=-=-=-=-=-=-=-\n");
                printf("-= Peças disponíveis: \n");
                printf("1. Bispo.\n");
                printf("2. Torre.\n");
                printf("3. Rainha.\n");
                printf("4. Cavalo.\n");
                printf("5. Sair.\n");

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
                    /* Rook do-while*/
                    rook = 0;
                    do
                    {
                        printf("Direita\n");
                        rook++;
                    } while (rook < 5);

                    break;
                case 3:
                    /* Queen for*/

                    for (queen = 0; queen < 8; queen++)
                    {
                        printf("Esqueda\n");
                    }

                    break;
                case 4:
                    /* knight nested loop */

                    knight = 0;

                    do
                    {
                        printf("Cima\n");
                        knight++;
                        while (knight == 3)
                        {
                            printf("Direita\n");
                            knight++;
                        }
                    } while (knight < 3);

                case 5:
                    /* Leave the moving piece option */

                    printf("Saindo...\n");
                    break;
                default:
                    printf("Alternativa inválida...\n");
                    break;
                }
            } while (piece != 4);

            break;
        case 3:
            /* leave the program */
            printf("Saindo...\n");
            break;
        default:
            printf("Alternativa inválida...\n");
            break;
        }

    } while (options != 3);

    return 0;
}