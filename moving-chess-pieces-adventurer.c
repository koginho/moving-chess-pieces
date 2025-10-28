#include <stdio.h>

int main() {

    int horse = 0;

    do
    {
        printf("Direita\n");
        horse++;
        while (horse == 3)
        {
            printf("Cima\n");
            horse++;
        }
    } while (horse < 3);
    
    return 0;
}