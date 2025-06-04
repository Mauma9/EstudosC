#include <stdio.h>

int main(void)
{
    // variables
    double sideA = 0;
    double sideB = 0;
    double sideC = 0;

    // Data entry
    printf("Type the size of the side A: ");
    scanf("%lf", sideA);

    printf("Type the size of the side B: ");
    scanf("%lf", sideB);

    printf("Type the size of the side C: ");
    scanf("%lf", sideC);

    //Data processing
		if (sideA == sideB && sideC == sideB) {
			printf("Triângulo Equilatero");
		} else if (sideA == sideB || sideC == sideB || sideA == sideC) {
			printf("Triângulo Isoceles");
		} else 
			printf("Triângulo Escaleno");
    return 0;
}