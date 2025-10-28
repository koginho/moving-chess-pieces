#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        printf("Loop externo\n");
        for (int j = 1; j <= 3; j++)
        {
            printf("Loop interno\n");
        }
    }
    
    return 0;
}