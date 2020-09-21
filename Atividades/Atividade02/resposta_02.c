/**
 * Created by Rafiou Sitou
 */


/**
 * Escrever um programa em C que calcula o desconto sobre um valor com base na escala:
 * até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char * argv[]) {

    double value;
    double discount;
    int discount_percent;

    printf("Enter the value :");
    scanf("%lf", &value);
    getchar();

    if (value <= 100) {
        discount = value * 1 / 100;
        discount_percent = 1;
    } else if (value > 100 && value <= 500) {
        discount = value * 5 / 100;
        discount_percent = 5;
    } else {
        discount = value * 10 / 100;
        discount_percent = 10;
    }

    printf("\nCongratulation!!! You have a %d%% discount.\n", discount_percent);
    printf("The value %.2f discount is %.2f\n", value, discount);
    printf("The value %.2f after discount is %.2f\n\n", value, value - discount);

    system("PAUSE");
    return 0;
}
