#include <stdio.h>

int *SmallestNumber(int *arr, int tamanho)
{
    if (arr == NULL || tamanho <= 0)
    {
        return NULL;
    }

    int *menor = &arr[0];

    for (int i = 0; i < tamanho; i++)
    {
        if (arr[i] < *menor) // *x == x[0] (neste caso precisamos de comparar 2 elementos do mesmo tipo, o ponteiro apontando para a posição inicial do vetor e a psoição i[diferente para cada volta do loop] do vetor)
        {
            menor = &arr[i]; // neste caso temos que designar o valor do ponteiro "maior"(por isso não tem o *) para ter o valor do endereço i do vetor arr
        }
    }
    return menor;
}

int main(void)
{
    int numeros[5] = {32, 76, 10, 2, 45};

    int *menor = SmallestNumber(numeros, 5);

    printf("Menor valor: %d\n", *menor);
    printf("Endereco do menor: %p\n", menor);
    printf("Posicao no array: %d\n", menor - numeros);

    return 0;
}