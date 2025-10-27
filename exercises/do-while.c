#include <stdio.h>

int main() {
    int option;

    do
    {
        printf("-= Alternativas =-\n");
        printf("-= 1. Alternativa 1. =-\n");
        printf("-= 2. Alternativa 2. =-\n");
        printf("-= 3. Sair. =-\n");
        printf("Escolha uma alternativa: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Alternativa 1 foi escolhida.\n");
            break;
        case 2:
            printf("Alternativa 2 foi escolhida.\n");
            break;
        case 3:
            printf("Saindo...\n");
            break;
        default:
            printf("Alternativa inválida...");
            break;
        }

    } while (option != 3);
    
    
    return 0;
}