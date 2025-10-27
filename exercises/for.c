#include <stdio.h>

int main()
{

    int number, i, options, soma1, soma2;

    do
    {
        printf("-= Menu =-\n");
        printf("-= 1. Tabuada.\n");
        printf("-= 2. Soma.\n");
        printf("-= 3. Sair.\n");
        printf("Escolha uma alternativa: ");
        scanf("%d", &options);

        switch (options)
        {
        case 1:
            printf("Alternativa escolhida: Tabuada.\n");

            printf("Digite um número de 1 a 10: ");
            scanf("%d", &number);
            
            for (i = 0; i <= 10; i++)
            {
                printf("%d x %d = %d.\n", i, number, i * number);
            }
            break;
        case 2:
            printf("Alternativa escolhida: Soma.\n");
            printf("Digite o primeiro número: ");
            scanf("%d", &soma1);
            printf("Digite o segundo número: ");
            scanf("%d", &soma2);

            printf("O resultado de %d + %d = %d.\n", soma1, soma2, soma1 + soma2);
            
            break;
        case 3:
            printf("Saindo...\n");

            break;
        default:
            printf("Alternativa inválida...\n");

            break;
        }

    } while (options != 3);

    return 0;
}
