#include <stdio.h>

int main(void)
{
    // Variables
    int tamanho = 0;

    // Data entry
    scanf("%d", &tamanho);
    // Data processing
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
