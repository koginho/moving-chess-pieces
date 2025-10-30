#include <stdio.h>

void breakLine(){
    printf("\n");
}

void rookLoop(int n)
{
    if (n > 0)
    {
        printf("Direita\n");
        rookLoop(n - 1);
    }
}

void queenLoop(int n)
{
    if (n > 0)
    {
        printf("Esquerda\n");
        queenLoop(n - 1);
    }
}

void bishopLoop(int n)
{
    if (n > 0)
    {
        for (int i = 0; i < 1; i++)
        {
            printf("Cima\n");
            for (int j = 0; j < 1; j++)
            {
                printf("Direita\n");
            }
        }
        bishopLoop(n - 1);
    }
}

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
            printf("-= Cavalo 2 casas para cima e 1 casa para direita\n");

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
                    /* Bishop recursion-loop*/

                    printf("Peça escolhida: Bispo.\n");
                    breakLine();

                    bishop = 5;
                    bishopLoop(bishop);

                    breakLine();
                    break;
                case 2:
                    /* Rook recursion-loop*/

                    printf("Peça escolhida: Torre.\n");
                    breakLine();

                    rook = 5;
                    rookLoop(rook);

                    breakLine();
                    break;
                case 3:
                    /* Queen recursion-loop*/

                    printf("Peça escolhida: Rainha.\n");
                    breakLine();

                    queen = 8;
                    queenLoop(queen);

                    breakLine();
                    break;
                case 4:
                    /* knight nested loop with multiple variable */

                    printf("Peça escolhida: Cavalo.\n");
                    breakLine();

                    for (int knightR = 2, knight = 0; knight < 2 && knightR > 0; knight++, knightR--)
                    {
                        printf("Cima\n");
                        while (knight == 1)
                        {
                            printf("Direita\n");
                            knight++;
                        }
                    }

                    /*  same as the loop obove, but using do-while and while. */

                    /* do
                    {
                        printf("Cima\n");
                        knight++;
                        while (knight == 3)
                        {
                            printf("Direita\n");
                            knight++;
                        }
                    } while (knight < 3); */

                    breakLine();
                    break;
                case 5:
                    /* Leave the moving piece option */

                    breakLine();
                    printf("Saindo...\n");
                    breakLine();

                    break;
                default:
                    breakLine();
                    printf("Alternativa inválida...\n");
                    breakLine();

                    break;
                }
            } while (piece != 5);

            break;
        case 3:
            /* leave the program */

            breakLine();
            printf("Saindo...\n");
            breakLine();

            break;
        default:
            breakLine();
            printf("Alternativa inválida...\n");
            breakLine();
            
            break;
        }

    } while (options != 3);

    return 0;
}