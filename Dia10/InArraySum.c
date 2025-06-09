#include <stdio.h>

int sum(int *arr, int tamanho)
{
    int soma = 0; //para fazer a soma com o =+ é necessario iniciar a variavel com um valor.
    for(int i = 0 ; i < tamanho ; i++)
    {
        soma += arr[i];
    }
    return soma;//O tipo da função e seu retorno devem ser condizentes com o tipo da variavel que receberá o valor dado pela função
}

int main(void)
{
    int numeros[5]= {1,2,3,4,5};
    int resultado = sum(numeros, 5);
    printf("%d", resultado);
}