#include <stdio.h>

int main(void)
{
    //Variables
    int x;
    //Data entry
    scanf("%d", &x);
    //Pointer 
    int *a = &x;
    //Output
    printf("valor:%d\n endereco:%p"/*%p para endereço de memoria*/, x, a);
    return 0;
}
