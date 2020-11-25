/**
 * Created by Rafiou Sitou
 */

/**
 * Escrever um programa em C que leia dois números inteiros e determine qual é o menor.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    int number_1, number_2;

    printf("Enter the first number:");
    scanf("%d", &number_1);

    printf("Enter the second number:");
    scanf("%d", &number_2);

    printf("\n");

    if (number_1 < number_2) {
        printf("The smaller number is %d (%d < %d)", number_1, number_1, number_2);
    } else if (number_1 > number_2) {
        printf("The bigger number is %d (%d > %d)", number_1, number_1, number_2);
    } else {
        printf("The number 1 equals the number 2 (%d = %d)", number_1, number_2);
    }

    printf("\n\n");
    system("PAUSE");

    return 0;
}
