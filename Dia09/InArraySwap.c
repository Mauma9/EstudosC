#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main() {
    int lista[2] = {5, 2};
    printf("Antes: x = %d, y = %d\n",lista[0], lista[1]);
    swap(&lista[0], &lista[1]); // 
    printf("Depois: x = %d, y = %d\n",lista[0], lista[1]);
    return 0;
}
