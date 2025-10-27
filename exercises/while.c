#include <stdio.h>

int main()
{
    int i = 1;

    while (i <= 5)
    {
        printf("i = %d\n", i);
        i++;
    }

    int options;

    printf("-= Menu de Operações =-\n");
    printf("-= 1. Somar um número\n");
    printf("-= 2. Dividir um número\n");
    printf("-= 3. Sair.\n");

    printf("Escolha uma opção: ");
    scanf("%d", &options);

    while (options > 0)
    {
        switch (options)
        {
        case 1:
            printf("Opção escolhida: soma.\n");

            int n1, n2;
            printf("Digite o primeiro número: ");
            scanf("%d", &n1);
            printf("Digite o segundo número: ");
            scanf("%d", &n2);
            printf("O resultado da soma é: %d.\n", n1 + n2);

            printf("-= Menu de Operações =-\n");
            printf("-= 1. Somar um número\n");
            printf("-= 2. Dividir um número\n");
            printf("-= 3. Sair.\n");
            printf("Escolha uma opção: ");
            scanf("%i", &options);

            break;
        case 2:
            printf("Opção escolhida: divisão.\n");

            float n3, n4;
            printf("Digite o primeiro número: ");
            scanf("%d", &n3);
            printf("Digite o segundo número: ");
            scanf("%d", &n4);
            printf("O resultado da divisão é: %.2f.\n", n3 / n4);

            printf("-= Menu de Operações =-\n");
            printf("-= 1. Somar um número\n");
            printf("-= 2. Dividir um número\n");
            printf("-= 3. Sair.\n");
            printf("Escolha uma opção: ");
            scanf("%i", &options);

            break;
        case 3:
            printf("Saindo...\n");
            options = 0;

            break;
        default:
            printf("Oops.. Opção inválida.\n");
            printf("Escolha uma opção: ");
            scanf("%i", &options);
            break;
        }
    }

    printf("O programa terminou.\n");
    return 0;
}
