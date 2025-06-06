#include <stdio.h>

int dobrar(int *p){
    int resultado = *p * 2;
    return resultado;
}
int main(void)
{
    int x;
    scanf("%d", &x);
    int *d = &x;
    int resultado = dobrar(d);
    printf("resultado: %d", resultado);
    return 0;
}
