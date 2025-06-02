#include <stdio.h>
#include <math.h>

int main(void)
{
    // Variables
    int shapeCode = 0;
    double perimeter = 0;
    double area = 0;
    double side = 0;

    double PI = 3.14159265358979323846;

    // Data entry
    printf("for triangle type 3, for square type 4, for pentagon type 5, for hexagon type 6 and for heptagon type 7: ");
    scanf("%d", &shapeCode);
    printf("type the size of the shape's side: ");
    scanf("%lf", &side);

    // Data processing

    // Perimeter
    perimeter = side * shapeCode;

    // Area
    switch (shapeCode)
    {
    case 3:
        area = ((pow(side, 2)) * sqrt(3)) / 4;
        break;
    case 4:
        area = pow(side, 2);
        break;
    case 5:
        area = (5 * (pow(side, 2)) / (4 * (tan(36 * PI / 180))));
        break;
    case 6:
        area = ((3 * pow(side, 2) * sqrt(3)) / 2);
        break;
    case 7:
        area = ((7.0 / 4.0) * pow(side, 2) * (1.0 / tan(51.4285714)));
        break;
    default: //default is executed when none of the cases math with the tested values
        printf("Invalid shape code.\n");
        return 1; 
    }

    // Output
    printf("The area is:  %lf\n", area);
    printf("The perimeter is:  %lf\n", perimeter);
    return 0;
}