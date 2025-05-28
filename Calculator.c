#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*Leitor*/


    /*Declaração de variáveis*/
    int number1 = 0;
    int number2 = 0;
    int result = 0;

    /*entrada de dados*/
    printf("Type the first number");
    scanf("%d", &number1);

    printf("Type the second number");
    scanf("%d", &number2);

    //processamento

    result = number1 + number2;

    //Saída

    printf("The sum is equals %d\n", result);


    return 0;
}
