#include <stdio.h>

int main(void)
{
    int vet[] = {0, 1, 2, 3, 4}; //Criando o vetor e definindo o valor para cada index
    int vetR[5];//Criando vetor resultado, sem valores atribuídos.

    for (int i = 0; i < 5; i++)//loop para preencher o indicie equivalente do vetor resultado com o valor do vetor original vezes 10.
    {
        vetR[i] = vet[i] * 10;
       
    }
    for (int i = 0; i < 5; i++)//Print do valor de cada indicie.
    {
        printf("%d\n", vetR[i]);
    }
    return 0;
}