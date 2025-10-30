#include <stdio.h>

void recursiva(int numero) // local variable
{ 
    if (numero > 0)
    {
        printf("%d ", numero);
        recursiva(numero - 1);
    }
}

void recursividadeInvertida(int n)
{
    if (n > 0)
    {
        // dependência de execução: 
        recursividadeInvertida(n - 1); // isso é realizado de 10 até 1
        printf("%d ", n); // as informações são mantidas até o final do calculo assima
    }
}

int main()
{

    int size = 10;

    printf("Contagem regressiva... ");
    recursiva(size);

    printf("Contagem...");
    recursividadeInvertida(size);

    return 0;
}