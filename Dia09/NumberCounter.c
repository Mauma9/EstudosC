#include <stdio.h>

int NumberCounter(int *arr, int tamanho, int contado)
{
    if (arr == NULL || tamanho <= 0)
    {
        return -1;
    }

    int contador = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (arr[i] == contado) //Se o valor do indicie i for igual al numeroq  esta sendo contado
        {
            contador++; //o contador soma 1
        }
    }
    return contador;
}

int main(void)
{
    int numeros[5] = {45, 45, 2, 2, 45};
    int contado = 0;
    printf("digite o numero alvo:\n");
    scanf("%d", &contado);
    int contador = NumberCounter(numeros, 5, contado);

    printf("numero de ocorrencias: %d\n", contador);
    return 0;
}