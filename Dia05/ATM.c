#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variables
    int total = 0;
    int qtd200 = 0;
    int qtd100 = 0;
    int qtd50 = 0;
    int qtd20 = 0;
    int qtd10 = 0;
    int qtd5 = 0;
    int qtd2 = 0;
    int qtd1 = 0;

    // Data entry
    printf("Enter the amount to be withdrawn: ");
    scanf("%d", &total);

    // Data processing
    qtd200 = (total / 200);
    total = (total % 200);

    qtd100 = (total / 100);
    total = (total % 100);

    qtd50 = (total / 50);
    total = (total % 50);

    qtd20 = (total / 20);
    total = (total % 20);

    qtd10 = (total / 10);
    total = (total % 10);

    qtd5 = (total / 5);
    total = (total % 5);

    qtd2 = (total / 2);
    total = (total % 2);

    qtd1 = (total);

    // Output
    if (qtd200 > 0)
    {
        printf("%d 200 dollar bill:\n", qtd200);
    }
    if (qtd100 > 0)
    {
        printf("%d 100 dollar bill:\n", qtd100);
    }
    if (qtd50 > 0)
    {
        printf("%d 50 dollar bill:\n", qtd50);
    }
    if (qtd20 > 0)
    {
        printf("%d 20 dollar bill:\n", qtd20);
    }
    if (qtd10 > 0)
    {
        printf("%d 10 dollar bill:\n", qtd10);
    }
    if (qtd5 > 0)
    {
        printf("%d 5 dollar bill:\n", qtd5);
    }
    if (qtd2 > 0)
    {
        printf("%d 2 dollar bill:\n", qtd2);
    }
    if (qtd1 > 0)
    {
        printf("%d 1 dollar bill:\n", qtd1);
    }
     return 0;
}