void swap(int *a, int *b)
{
    #include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;  //Cria a variavel temp com o valor adquirido pelo ponteiro *a.
    *a = *b;        //Atribui o valor adquirido do ponteiro b para o valor adquirido pelo ponteiro a.
    *b = temp;      //Atribui o valor de temp ao valor adquirido pelo ponteiro b.
}

int main() {
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    printf("Antes da troca:\n");
    printf("x = %d, y = %d\n", x, y);

    swap(&x, &y);  //Dentro dos parenteses nesse caso vão os &(endereços) de x e y para dentro da função swap

    printf("Depois da troca:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

}