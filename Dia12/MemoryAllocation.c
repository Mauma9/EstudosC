#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 0;
    int *idades = ((int *)calloc(idades, sizeof(int)));

    printf("Quantas idades? ");
    scanf("%d", &tamanho);

    if (idades == NULL)
    {
        printf("Sem mem�ria!\n");
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

    free(idades);
    idades = NULL;
    return 0;
}
