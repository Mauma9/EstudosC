#include <stdio.h>
int triangle2for(int tamanho, int espacamento)
{
    for (int i = 0 ; i < tamanho; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            printf("#%*s", espacamento, " ");
            
        }
        printf("\n");
    }
    return 0;
} 


int triangle3for(int tamanho, int espacamento)
{
    for (int i = 0 ; i < tamanho; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            printf("#");
            for(int k = 0 ; k < espacamento ; k++)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

int main(void)
{
    int tamanho = 5;
    int espacamento = 2;
    printf("digite o tamanho: ");
    scanf("%d", &tamanho);
    printf("digite o espacamento: ");
    scanf("%d", &espacamento);

    triangle3for(tamanho, espacamento);
    triangle2for(tamanho, espacamento);
}