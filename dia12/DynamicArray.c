#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 0;
    int *idades = NULL;

    printf("Quantas idades? ");
    scanf("%d", &tamanho);

    // Verifica se o tamanho é válido
    if (tamanho <= 0)
    {
        printf("Tamanho invalido!\n");
        return 1;
    }

    // Aloca a memória corretamente
    idades = (int *)calloc(tamanho, sizeof(int));

    if (idades == NULL)
    {
        printf("Sem memoria!\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("Idade %d: ", i + 1);
        scanf("%d", &idades[i]);
    }

    printf("Voce digitou: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", idades[i]);
    }
    printf("\n");

    free(idades);
    idades = NULL;

    return 0;
}
