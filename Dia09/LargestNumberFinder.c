#include <stdio.h>

int *LargestNumber(int *arr/*o ponteiro *arr esta apontando para o primeiro valor do vetor*/, int tamanho)//Dentro dos parenteses estão o *arr que é o vetor q a função vai receber e o tamanho deste vetor, para conferir qual o maior numero.
{
    if (arr == NULL || tamanho <= 0)//Verificação para saber se o arr é valido. Se o array for nulo ou se o tamanho for menor ou igual a 0 retorna nulo, se n prossegue
    {
        return NULL;
    }

    int *maior = &arr[0]; //criar ponteiro maior apontando para o primeiro valor do vetor arr

    for (int i = 0; i < tamanho; i++)//Repete o if abaixo para todos os indicies do vetor
    {
        if (arr[i] > *maior) //Se o valor da posição i for maior que o ponteiro apontado para o valor da posição 0 do vetor
        {
            maior = &arr[i];//O valor de maior vira o valor do endereço i do vetor
        }
    }

    return maior; // Retorna o valor de arr[i] que é maior do que os outros
    //Neste caso maior esta apontando para o valor do endereço i do vetor arr 
}

int main(void)
{
    int numeros[5] = {12, 25, 7, 33, 18};

    int *maior = LargestNumber(numeros, 5); //< -Função a ser implementada!

    if (maior != 0)
    {
        printf("Maior valor: %d\n", *maior);
        printf("Endereco do maior: %p\n", maior);
        printf("Posicao no array: %d\n", maior - numeros);
    }
    return 0;
}