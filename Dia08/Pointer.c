#include <stdio.h>

// Função que soma os valores apontados por dois ponteiros
int sum(int *a, int *b) {
    int resultado = *a + *b; // *a e *b acessam os valores dos endereços apontados
    return resultado;
}

int main() {
    int x; // Variável inteira x
    int y; // Variável inteira y

    // Entrada de dados
    printf("Digite o primeiro número: ");
    scanf("%d", &x);

    printf("Digite o segundo número: ");
    scanf("%d", &y);

    // Ponteiros que apontam para x e y
    int *a = &x;
    int *b = &y;

    // Chamada da função passando os ponteiros
    int resultado = sum(a, b);

    // Saída do resultado
    printf("Resultado da soma: %d\n", resultado);

    return 0;
}
