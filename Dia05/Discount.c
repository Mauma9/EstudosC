#include <stdio.h>

int main(void)
{
    // Variables
    double price = 0;
    int quantity = 0;
    double total = 0;

    // Data entry
    printf("type the product price: ");
    scanf("%lf", &price);

    printf("type how many itens: ");
    scanf("%d", &quantity);

    // Data processing
    total = (price * quantity);
    // Start for the greatest to the lowest to save resources
    if (quantity >= 30)
    {
        total = (total * 0.7);
    }
    else if (quantity >= 20)
    {
        total = (total * 0.8);
    }
    else if (quantity >= 10)
    {
        total = (total * 0.9);
    }

    // Output
    printf("The total with discounts is: %lf\n", total);
    return 0;
}
